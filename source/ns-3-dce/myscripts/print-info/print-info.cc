#include "ns3/dce-module.h"
#include "ns3/core-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-module.h"
#include "ns3/data-rate.h"
#include <stdio.h>
#include <stdlib.h>

using namespace ns3;

static std::string Ipv4AddressToString (Ipv4Address ad)
{
  std::ostringstream oss;
  ad.Print (oss);
  return oss.str ();
}
// ===========================================================================
//
//   Topology
//
//
//         node 0                node 1               node 2
//   +----------------+    +----------------+    +----------------+
//   |   linux TCP    |    |   linux TCP    |    |   linux TCP    |
//   +----------------+    +----------------+    +----------------+
//   | iperf client   |    |                |    | iperf server   |
//   +----------------+    +----------------+    +----------------+
//   | point-to-point |    | point-to-point |    | point-to-point |
//   +----------------+    +----------------+    +----------------+
//           |  5 Mbps, 1 ms  |          |  5 Mbps 1ms   |
//           +----------------+          +---------------+
//       10.1.1.1       10.1.1.2      10.1.2.1       10.1.2.2
//
// This experience use iperf
//
// ===========================================================================

int execute_cmd(const char* cmd_str){
	if (system(NULL)) puts("Ok");
	else	exit(EXIT_FAILURE);

	std::cout << "Executing command " << cmd_str << std::endl;
	return system(cmd_str);
}

int main (int argc, char *argv[])
{
	
	/*print kernel information*/
		

	/*print sysctl information*/
  return 0;
}
