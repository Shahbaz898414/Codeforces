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


Iptables is a Linux command line firewall which
allows system administrators to manage incoming
and outgoing traffic through a set of configurable
table rules.

IPTable is a tool for managing firewall rules on a
Linux OS machine. IPTable is a firewall program for
Linux OS.

It monitors traffic from and to your server by using
tables.

Iptables is used to set up, maintain and inspect the
tables of IP packet filter rules in the Linux kernel

These tables includes a set of rules, called as
chains. The chains will filter incoming and
outgoing data packets.

Iptables is a command-line firewall service that
uses policy chains to allow or block the traffic.
When a connection tries to set up itself on your
system, iptables looks for a rule in its list in order
to match it to. If it doesn't matches, it takes the
default action.

*/