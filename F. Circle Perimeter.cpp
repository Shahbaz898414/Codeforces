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

a) Significance of Environment
b) Global Warming
c) Scope of Environment Management
d) EMS certification
e) Forest Act
f) Eco-system and its types
//////////////////////////////////////////////

The air gets polluted because of the industrial and transport activities, which release the
toxic matter in the air,
Following are the important pollutants, which have made the problem of Air Pollution very
serious.
Carbon compounds : CO2 is released by complete combustion of fossil fuels and CO, a
very toxic gas, is released by automobile exhausts.
Sulphur compounds : Through the thermal power plants, using coal, and from the oil
refineries, SO2, H2S, H2SO4 are released.
Nitrogen oxides : These oxides like NO, NO2, HNO3 are released by automobiles, power
plants and industries.
Ozone : Due to cooling industries the CFC is released which has affected the O3 in the
atmosphere.
Fluorides : They are produced by the industrial and insecticide sprays.
Hydrocarbons : They are released by the automobiles e.g. Benzene, Benzpyrene etc.
Metals : The metals such as lead, nickel, tin, beryllium, titanium are present in to form of
solid particles produced by metallurgical process.
Photochemical products : The products such as PAN, PB2N are the photochemical smog
produced by automobiles.

*/


