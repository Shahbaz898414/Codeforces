#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

typedef long long ll;
#define pb push_back
#define fi first
#define se second

// ll bit(ll x, ll y)
// {
//   ll vnt = 1, vbg = x;
//   while (y > 0)
//   {
//     if (y % 2)
//       vnt *= vbg, vnt %= mod;
//     vbg *= vbg, y /= 2, vbg %= mod;
//   }
//   return vnt;
// }

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {

    int n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
      cin >> v[i];
//  sort(v.begin(),v.end());
    int cnt=0;

    int b1,b2,b3;

    for (ll i = 0; i < n; i++)
    {
      if(v[i]==1){
        b1=i;
      }
      if(v[i]==2) b2=i;

      if(v[i]==n) b3=i;
    }


    if((b3>b2 and b2>b1) || (b1>b2 and b2>b3)){
      cout<<b2+1<<" "<<b3+1<<endl;
    }else if((b1>b2 and b3>b2 and b3>b1) || (b2>b1 and b2>b3 and b1>b3)) {
      cout<<b1+1<<" "<<b3+1<<endl;
    }else {
      cout<<1<<" "<<1<<endl;
    }


  
    
  }
}