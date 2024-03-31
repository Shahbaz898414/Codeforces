#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

   ll t;cin>>t;
   while(t--) {
     ll n,m;cin>>n;
     vector<ll> v(n),odd,even;
      ll cnt=0;
     for (int i = 0; i <n; i++) {
      cin>>v[i];

      if(v[i]==1) cnt++;
     }
     

     cout<<n-cnt/2<<endl;
     

   }

	
	return 0;
}
