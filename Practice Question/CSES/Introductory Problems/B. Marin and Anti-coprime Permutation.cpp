#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll mod= 998244353;

ll solve(ll x){
  ll ans=1;
  for (int i = 2; i <=x; i++)
  {
    ans=(ans*i)%mod;
  }

  return ans;
  
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;
  
  //  vector<int> fac(1001,1);
  //  for (int i = 1; i <=1000; i++){
  //    fac[i]=(fac[i-1]*i)%mod;
  //  }

  while (t-- > 0) {

   ll n;cin>>n;
   if(n%2==1){
     cout<<0<<endl;
   }else{
    //  cout<<(fac[n/2]*fac[n/2])%mod<<endl;
    ll ans;
    ans=solve(n/2);
    ll ans2=solve(n/2);
    ans=(ans*ans2)%mod;
    cout<<ans<<endl;
   }

  }
  return 0;
}