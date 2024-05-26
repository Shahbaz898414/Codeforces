#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;


int ans;
int t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		int y1=0,y2=0;
		for(int i=n;i>=1;i--)
		{
			while(i*i+y1*y1<n*n)y1++;
			while(i*i+y2*y2<(n+1)*(n+1))y2++;
			ans+=(y2-y1);
		}
    
		cout<<ans*4<<endl;
	}
}

/*

A Wireless ad hoc network is a group of independent terminals or nodes which communicate with each other by forming a multi-hop radio network.

Nodes in this networks have to compete with
some effects of radio communication such as
interference, noise and fading etc. as the
communication between the nodes takes place
over the wireless (radio) links.

- The links in wireless ad hoc network have less
bandwidth as compared to that of a wired
network.

- In wireless ad hoc networks or simply an ad hoc
network, each node acts as a router and a host
and the network control is distributed among the
nodes.

Infrastructure-less network is a group of self-
configurable, autonomous, self-organizing nodes
connected by wireless links.
- The nodes can move freely from one to another
place by changing the topology regularly because
there is no predefined infrastructure. In this type
of networks, communication between nodes takes
place using multi-hop communication.

- In Ad hoc network, the network formation takes
place dynamically through the collaboration of an
random set of independent nodes.
- Due to decentralized network, topology discovery
and delivery of message should be executed by
nodes themselves.


The nodes can join or leave the network at any
time due to free node mobility.

- Wireless ad hoc networks allows short range and
long range communication ranging from wireless
mobile networks to wireless sensor networks.

- In wireless Ad hoc network, the network topology
is highly dynamic due to mobility of nodes.

- The nodes in ad hoc network can communicate
with each other directly within their wireless range
whereas they can communicate with each other by
using multi-hop radio network beyond their
wireless range.


*/