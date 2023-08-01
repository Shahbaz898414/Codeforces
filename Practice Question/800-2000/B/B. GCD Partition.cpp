// C++ program which returns the Number of sub sequences
// (or subsets) which are divisible by m.
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

   ll t;cin>>t;
   while(t--) {
     ll n,m;cin>>n;
     vector<ll> v(n),odd,even;
     ll sum=0;
     for (int i = 0; i <n; i++) { 
      cin>>v[i];
      sum+=v[i];
     }

     ll cur=0;ll ans=1;
     for (int i = 0; i<n-1; i++) {
      cur+=v[i]; sum-=v[i];
      cout<<cur<<" "<<sum<<endl;

      ans=max(ans,__gcd(sum,cur));
     }
    cout<<ans<<endl;

   }

	
	return 0;
}
