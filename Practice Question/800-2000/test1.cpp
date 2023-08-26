#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long

ll mod =1e9+7;




int main() {

    ll dp[1005][1005];

    dp[1][1]=1;

    for (ll i =2; i < 1005; i++)
    {
        /* code */
        for (ll j = 1; j <=i; j++)
        {
            /* code */

            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]*j)%mod;
        }
        
    }
    




  ll t;cin>>t;

  while(t--) {
    ll n;cin>>n;

    ll ans=0;


    for (ll i = 0; i <=n; i++)
    {
        /* code */
        ans=(ans+dp[n][i])%mod;
    }

    cout<<ans<<endl;
    

    // vector<ll>  arr(n);

    // for (ll i = 0; i < n; i++)   
    //     cin>>arr[i];
    
    



  }



    return 0;
}
