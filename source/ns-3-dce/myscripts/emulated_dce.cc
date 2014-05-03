/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

//
// Network topology
//
//           10Mb/s, 10ms       10Mb/s, 10ms
//       (0_0)          (1_0)  (1_1)         (2_0)
//       n0-----------------n1-----------------n2
//	(Ue)		 	 						(Enb) 	   			(end-host)	
// 	10.1.3.1:3000	10.1.3.2/10.1.2.1    10.1.2.2:49153
//
// 	Device topology:
// 	ue(n0)----------------------------enb(n1)-------------------------------endhost(n2)
// 	(ue_dev)          (enb_radio_dev)         (enb_core_dev)            (endhost_dev)  
//  Usage (e.g.): ./waf --run "scratch/emulated --<parameter1>"


#include "emulated_dce.h"
/*
 * Changing the radio link bandwidth every "time_step" second.
 * The changing rate determined by "rate_slope".
 */
static void link_change(){
  if (p_rate > 9 && p_rate < 10 && Simulator::Now().GetSeconds() < 60 )
	p_rate = p_rate;
  else if (p_rate < 0.2 || p_rate > 24)
	p_rate = p_rate;
  else p_rate += rate_slope; 
  std::stringstream ss;
  ss << p_rate;
  current_radio_rate = ss.str()+"Mb/s";
  *debugger_wp->GetStream() << Simulator::Now().GetSeconds() << "s: " <<  current_radio_rate << "\n";
  Config::Set("/NodeList/1/DeviceList/0/$ns3::PointToPointNetDevice/DataRate",StringValue(current_radio_rate));
  while (scheduler_timer < sim_time){
	 scheduler_timer += time_step;
 	 Simulator::Schedule(Seconds(scheduler_timer),&link_change);
  }
}

/*
 * Schedule a radio bandwidth change (kbps) at a moment of the experiment
 */
static void change_radio_bandwidth_at_time(std::string bandwidth, double time_of_change){
	NS_LOG_UNCOND("Change radio bandwidth");
  Simulator::Schedule(Seconds(time_of_change), &set_radio_bandwidth, bandwidth);
}

/*
 * Schedule a link delay change (ms) at a moment of the experiment
 */
static void change_radio_delay_at_time(double delay, double time_of_change){
	NS_LOG_UNCOND("Change radio delay");
  Simulator::Schedule(Seconds(time_of_change), &set_radio_delay, delay);
}


/*
 * Set radio bandwidth
 */
static void set_radio_bandwidth(std::string bandwidth){
  Config::Set("/NodeList/1/DeviceList/0/$ns3::PointToPointNetDevice/DataRate",StringValue(bandwidth));
  *debugger_wp->GetStream() << Simulator::Now().GetSeconds() << "s: new bandwidth = " << bandwidth << "\n";
  NS_LOG_UNCOND(Simulator::Now().GetSeconds() << "s: new bandwidth = " << bandwidth << "\n");
}

/*
 * Set radio link delay (millisecond)
 */
static void set_radio_delay(double delay){
  //Config::Set("/NodeList/1/DeviceList/0/$ns3::PointToPointNetDevice/Delay",TimeValue(MilliSeconds(delay)));
  //Config::Set("/ChannelListPriv/ChannelList/*/$ns3::PointToPointChannel/Delay",StringValue("1000ms"));
  //radio_link.SetChannelAttribute ("Delay", TimeValue (MilliSeconds (5000)));
  //Config::Set("/ChannelListPriv/ChannelList/*/$ns3::PointToPointChannel/Delay",StringValue("1000ms"));
  *debugger_wp->GetStream() << Simulator::Now().GetSeconds() << "s: new delay (ms) = " << delay << "\n";
  NS_LOG_UNCOND(Simulator::Now().GetSeconds() << "s: new delay (ms) = " << delay << "\n");
}



int main (int argc, char *argv[])
{
      CommandLine cmd;
    cmd.AddValue("sim_time", "Total duration of the simulation [s])", sim_time);
    cmd.AddValue("packet_size", "Size of each packet", packet_size);
    cmd.AddValue("sending_rate", "Application sending rate", sending_rate);
    cmd.AddValue("core_network_bandwidth", "Core network Data Rate", core_network_bandwidth);
    cmd.AddValue("core_network_delay", "Core network Delay", core_network_delay);
    cmd.AddValue("core_network_mtu", "Core network MTU size", core_network_mtu);
    cmd.AddValue("is_tcp", "Transport protocol used", is_tcp);
 
    /**ConfigStore setting*/
    Config::SetDefault("ns3::ConfigStore::Filename", StringValue("emulated-nsc.in"));
    Config::SetDefault("ns3::ConfigStore::FileFormat", StringValue("RawText"));
    Config::SetDefault("ns3::ConfigStore::Mode", StringValue("Load"));
    ConfigStore inputConfig;
    inputConfig.ConfigureDefaults();
    inputConfig.ConfigureAttributes();
    

  cmd.Parse (argc, argv);
	if (is_tcp==1){
  // Users may find it convenient to turn on explicit debugging
  // for selected modules; the below lines suggest how to do this
  //  LogComponentEnable("TcpL4Protocol", LOG_LEVEL_ALL);
  //  LogComponentEnable("TcpSocketImpl", LOG_LEVEL_ALL);
  LogComponentEnable("PacketSink", LOG_LEVEL_ALL);
  //  LogComponentEnable("TcpLargeTransfer", LOG_LEVEL_ALL);
     // LogComponentEnable("TcpNewReno",level);
     // LogComponentEnable("TcpReno",level);
  //LogComponentEnable("TcpTahoe",level);
  //LogComponentEnable("NscTcpL4Protocol",LOG_LEVEL_DEBUG);
  LogComponentEnable("OnOffApplication", level_all);
  //LogComponentEnable("NscTcpSocketImpl",level_info);
  //LogComponentEnable("RttEstimator",level);
  //LogComponentEnable("TcpSocketBase",level);
  }


   /* create files for wrappers */
    dev_queues_wp = asciiTraceHelper.CreateFileStream(queues);
    debugger_wp = asciiTraceHelper.CreateFileStream(debugger);
		macro_wp = asciiTraceHelper.CreateFileStream(macro);



  NodeContainer n0n1;
  n0n1.Create (2);

  NodeContainer n1n2;
  n1n2.Add (n0n1.Get (1));
  n1n2.Create (1);


  remote_host = n1n2.Get(1);
  ue = n0n1.Get(0);
  enb = n1n2.Get(0); 

  // We create the channels first without any IP addressing information
  // First make and configure the helper, so that it will put the appropriate
  // attributes on the network interfaces and channels we are about to install.
  core_network_link.SetDeviceAttribute ("DataRate", DataRateValue (DataRate (core_network_bandwidth)));
  core_network_link.SetChannelAttribute ("Delay", TimeValue (MilliSeconds (core_network_delay)));
  core_network_link.SetDeviceAttribute ("Mtu", UintegerValue(core_network_mtu));
 
  radio_link.SetDeviceAttribute ("DataRate", DataRateValue (DataRate (init_radio_bandwidth)));
  radio_link.SetChannelAttribute ("Delay", TimeValue (MilliSeconds (init_radio_delay)));
  radio_link.SetDeviceAttribute ("Mtu", UintegerValue(init_radio_mtu));


  // And then install devices and channels connecting our topology.
  NetDeviceContainer radio_dev = radio_link.Install (n0n1); 	//Radio link devices, n0-Ue, n1-Enb,SPGW
  NetDeviceContainer core_dev = core_network_link.Install (n1n2);		//Core network devices, n2-endhost
  enb_radio_dev = radio_dev.Get(1)->GetObject<ns3::PointToPointNetDevice>();  //radio side enb device
  enb_core_dev = core_dev.Get(0)->GetObject<ns3::PointToPointNetDevice>();    //core side enb device
  endhost_dev = core_dev.Get(1)->GetObject<ns3::PointToPointNetDevice>();
  ue_dev = radio_dev.Get(0)->GetObject<ns3::PointToPointNetDevice>();


#ifdef KERNEL_STACK
  NS_LOG_INFO("!used kernel stack " << dce_stack);
  DceManagerHelper dceManager;
  dceManager.SetNetworkStack("ns3::LinuxSocketFdFactory", "Library", StringValue(dce_stack));
  LinuxStackHelper stack;
  stack.Install(remote_host);
  stack.Install(ue);
	stack.Install(enb);
	
#else
  NS_LOG_ERROR ("Linux kernel stack for DCE is not available. build with dce-linux module.");
  return 0;
#endif
  
  Ipv4AddressHelper ipv4;
  ipv4.SetBase ("10.1.3.0", "255.255.255.0");
  Ipv4InterfaceContainer radio_interfs = ipv4.Assign (radio_dev); 
  ipv4.SetBase ("10.1.2.0", "255.255.255.0");
  Ipv4InterfaceContainer core_interfs = ipv4.Assign (core_dev);
  ue_ip = radio_interfs.GetAddress(0);
  endhost_ip = core_interfs.GetAddress(1);
  enb_radio_ip = radio_interfs.GetAddress(1);
  enb_core_ip = core_interfs.GetAddress(0);
	
	/*Network tunning if needed*/
	//stack.SysctlSet(remote_host,".net.dccp.default.rx_ccid",m_ccid);

	dceManager.Install(remote_host);
	dceManager.Install(ue);
	dceManager.Install(enb);
  //*****************************Install and start applications on UEs and remote host****************************//
    uint16_t dlPort = 3000;
    ApplicationContainer clientApps;
    ApplicationContainer serverApps;

   if (is_tcp == 1){
                LogComponentEnable("Queue",level_all);    //Only enable Queue monitoring for TCP to accelerate experiment speed.
                put = DIR + "tcp-put.dat";
                put_wp = asciiTraceHelper.CreateFileStream(put);
        				/*********TCP Application********/
       					PacketSinkHelper sink("ns3::LinuxTcpSocketFactory", InetSocketAddress(Ipv4Address::GetAny(), dlPort));
       					serverApps.Add(sink.Install(ue));

        				OnOffHelper onOffHelper("ns3::LinuxTcpSocketFactory", Address ( InetSocketAddress(ue_ip, dlPort) ));
        				onOffHelper.SetConstantRate( DataRate(sending_rate), packet_size );
       					clientApps.Add(onOffHelper.Install(remote_host));
   }
              else{
                put = DIR + "udp-put.dat";
                put_wp = asciiTraceHelper.CreateFileStream(put);
        					/*********UDP Application********/
        				PacketSinkHelper sink("ns3::LinuxUdpSocketFactory", InetSocketAddress(Ipv4Address::GetAny(), dlPort));
       					serverApps.Add(sink.Install(ue));

        				OnOffHelper onOffHelper("ns3::LinuxUdpSocketFactory", Address ( InetSocketAddress( ue_ip, dlPort) ));
        				onOffHelper.SetConstantRate( DataRate(sending_rate), packet_size );
       					clientApps.Add(onOffHelper.Install(remote_host));

								PacketSinkHelper sinkul("ns3::LinuxUdpSocketFactory", InetSocketAddress(Ipv4Address::GetAny(), 5000));
       					serverApps.Add(sinkul.Install(remote_host));

        				OnOffHelper onOffHelperul("ns3::LinuxUdpSocketFactory", Address ( InetSocketAddress( endhost_ip, 5000) ));
        				onOffHelperul.SetConstantRate( DataRate(sending_rate), packet_size );
       					clientApps.Add(onOffHelperul.Install(ue));

    }


  /*******************Start client and server apps***************/
  serverApps.Start (Seconds (0.01));		//All server start at 0.01s.
  clientApps.Start (Seconds(0.5));

  //Simulator::ScheduleWithContext (0 ,Seconds (0.0), &getTcpPut);
	change_radio_bandwidth_at_time("30kb/s",7); //change bandwidth at 5s.
	change_radio_delay_at_time(1000000000,300); //change radio link delay
  //Simulator::Schedule(Seconds(0.1), &link_change);
  
    /****ConfigStore setting****/
    Config::SetDefault("ns3::ConfigStore::Filename", StringValue("emulated-nsc.out"));
    Config::SetDefault("ns3::ConfigStore::FileFormat", StringValue("RawText"));
    Config::SetDefault("ns3::ConfigStore::Mode", StringValue("Save"));
    ConfigStore outputConfig;
    outputConfig.ConfigureDefaults();
    outputConfig.ConfigureAttributes();

  Config::Set("/NodeList/1/DeviceList/0/$ns3::PointToPointNetDevice/DataRate",StringValue(init_radio_bandwidth));

  //core_network_link.EnablePcap("core");
  radio_link.EnablePcapAll("emulated");

	//execute_app_on_nodes();

  Simulator::Stop (Seconds (sim_time));
  Simulator::Run ();
  Simulator::Destroy ();
}


/*
	*This has to be executed before Simulator::Stop()
	*/
static int execute_app_on_nodes(){

	std::cout << "Installing Linux kernel\n";
	/*Install Linux kernel on nodes*/
	DceManagerHelper dceManager;
	dceManager.SetNetworkStack ("ns3::LinuxSocketFdFactory", "Library", StringValue (dce_stack));
	dceManager.Install(remote_host);
	dceManager.Install(ue);
	dceManager.Install(enb);

	LinuxStackHelper stack;
	stack.Install(remote_host);
	stack.Install(ue);
	stack.Install(enb);
	
	/*Executing apps on nodes*/
	std::cout << " and executing apps on nodes...\n";
  DceApplicationHelper dce;
  ApplicationContainer apps;

  dce.SetStackSize (1 << 20);

  // Launch iperf client on node 0
  dce.SetBinary ("sysctl");
  dce.ResetArguments ();
  dce.ResetEnvironment ();
  dce.AddArgument ("-A");

  apps = dce.Install (remote_host);
  apps = dce.Install (ue);
  apps = dce.Install (enb);
  apps.Start (Seconds (0.7));
  apps.Stop (Seconds (20));
}

