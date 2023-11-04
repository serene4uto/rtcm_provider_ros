import rclpy
from rclpy.node import Node
from rtcm_msgs.msg import Rtcm

from queue import Queue
from pyubx2 import RTCM3_PROTOCOL, protocol

from pygnssutils import VERBOSITY_LOW, GNSSNTRIPClient


# NTRIP caster parameters - AMEND AS REQUIRED:
# Ideally, mountpoint should be <30 km from location.
IPPROT = "IPv4"  # or "IPv6"
NTRIP_SERVER = "www.gnssdata.or.kr"
NTRIP_PORT = 2101
FLOWINFO = 0  # for IPv6
SCOPEID = 0  # for IPv6
MOUNTPOINT = "TEGN-RTCM32"  # leave blank to retrieve sourcetable
NTRIP_USER = "kde1054@naver.com"
NTRIP_PASSWORD = "gnss"
# NMEA GGA sentence status - AMEND AS REQUIRED:
GGAMODE = 0  # use fixed reference position (0 = use live position)
GGAINT = 10  # interval in seconds (-1 = do not send NMEA GGA sentences)
# Fixed reference coordinates (used when GGAMODE = 1) - AMEND AS REQUIRED:
REFLAT = 53
REFLON = -2.4
REFALT = 40
REFSEP = 0


class RtcmNtripPub(Node):
    def __init__(self):
        super().__init__('rtcm_ntrip_pub')

        self.ntrip_queue = Queue()
        self.rtcm_pub = self.create_publisher(Rtcm, '/rtcm', 1)
        timer_period = 0.01  # seconds
        self.rtcmpub_timer = self.create_timer(timer_period, self.onRtcmPubTimerCallBack)

        self.get_logger().info(f"Starting NTRIP client on {NTRIP_SERVER}:{NTRIP_PORT}...\n")
        self.gnc = GNSSNTRIPClient(None, verbosity=VERBOSITY_LOW)
        self.streaming = self.gnc.run(
                ipprot=IPPROT,
                server=NTRIP_SERVER,
                port=NTRIP_PORT,
                flowinfo=FLOWINFO,
                scopeid=SCOPEID,
                mountpoint=MOUNTPOINT,
                ntripuser=NTRIP_USER,  # pygnssutils>=1.0.12
                ntrippassword=NTRIP_PASSWORD,  # pygnssutils>=1.0.12
                reflat=REFLAT,
                reflon=REFLON,
                refalt=REFALT,
                refsep=REFSEP,
                ggamode=GGAMODE,
                ggainterval=GGAINT,
                output=self.ntrip_queue,
            )

    def onRtcmPubTimerCallBack(self):
        try:
            raw_data, parsed_data = self.ntrip_queue.get()
            if protocol(raw_data) == RTCM3_PROTOCOL:
                # self.get_logger().info("Message received: {}".format(parsed_data))
                rtcm_msg = Rtcm()
                rtcm_msg.rtcm_data = raw_data
                rtcm_msg.header.frame_id = "rtcm_data"
                rtcm_msg.header.stamp = self.get_clock().now().to_msg()
                self.rtcm_pub.publish(rtcm_msg)
        except Exception as err:
            self.get_logger().error(f"Something went wrong in send thread {err}")        

            

def main(args=None):
    rclpy.init(args=args)
    rtcm_ntrip_pub = RtcmNtripPub()
    rclpy.spin(rtcm_ntrip_pub)
    rtcm_ntrip_pub.gnc.stop()
    rtcm_ntrip_pub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()