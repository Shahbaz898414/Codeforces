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

    ll n,m;
		cin >> n;

    ll cnt=0;

    ll a=0,b=0;

    map<ll,ll>  ma;

    for (ll i = 0; i < n-1; i++)
    {
      /* code */

      cin>>a>>b;

      ma[a]++;
      ma[b]++;
    }

    for (ll i = 1; i <=n; i++)
    {
      /* code */
      if(ma[i]==1) cnt++;
    }

    cnt=(cnt/2)+(cnt%2);

    cout<<cnt<<endl;
    
    
	
    
  }
  return 0;
}










