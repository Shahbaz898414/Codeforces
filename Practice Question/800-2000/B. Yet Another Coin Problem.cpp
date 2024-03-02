#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {

    ll n;cin>>n;

    vector<ll>  arr(n);

    for (ll i = 0; i < n; i++) {
      
      cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    cout<<2*(arr[n-1]-arr[0]+arr[n-2]-arr[1])<<endl;
    
  }
  return 0;
}
