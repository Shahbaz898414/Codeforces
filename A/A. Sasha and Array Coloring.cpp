#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
      cin >> a[i];
    ll ans = 0;
    ll op = 0;

    sort(a, a + n);

    for (ll i = 0; i < n/2; i++)
    {
      ans+=a[n-i-1]-a[i];
    }

    cout<<ans<<endl;

   

    /*

    7
    0
    11
    23
    0
    5

    1 13 9 3 7 2

    */
  }

  return 0;
}
