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


- It is a network with pre-constructed infrastructure
made up of fixed network nodes and gateways
where network services are delivered through
pre-constructed infrastructures.

- Infrastructure based networks consists of fixed
base stations called as access points and they are
connected by wires.

- When mobile node is inside the communication
range they can communicate with BS via wireless
link

- When mobile node is not in the communication
range of base station then it makes connection
with other base station for communication.

- In this type of networks, access point is a central
controller for each device.

- Installation of such infrastructure is too expensive
and it is sometimes technically impossible for
some remote localities.

- In this type of networks all devices on a wireless
network communicate with each other through a
wireless router (Access point).



*/