// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//       int n;
//       cin>>n;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7,inf = 1e18;

// void setIO(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// }
int main(){
    // setIO();
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll ans = 1;
        for (ll i = 3;i <= 2 * n;i++)
            ans = (ans * i)%mod;
        cout<<ans<<endl;
    }
    return 0;
}