#include <bits/stdc++.h>
using namespace std;
#define ll long long
  



int main() {

    ll int mod = 998244353;
    int N = 2e5 + 100;
    vector<ll int> fact(N);
    fact[0] = fact[1] = 1;
    for(int i=2; i<N; i++)
        (fact[i] = i*fact[i-1]) %= mod;

    ll t;cin>>t;
    while(t--){
      string s;cin>>s;

      ll cnt=1;
      ll ans=1;


      ll x=1;

      ll sum=0;

      char f=s[0];

      for (ll i = 1; i < s.size(); i++)
      {
        /* code */
        if(f!=s[i]){


          (ans*=cnt)%=mod;

          sum+=cnt;
            x++;

            cnt=1;
        }else cnt++;

        f=s[i];
      }


      sum+=cnt;
      (ans *=cnt)%=mod;

      (ans*=fact[s.size()-x])%=mod;

      cout<<sum<<endl; 

      cout<<s.size()-x<<" "<<ans<<endl;
      


    }
    return 0;
}



