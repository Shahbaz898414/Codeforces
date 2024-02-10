#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353


int main()
{

  vector<ll> ways(10);

  for (ll i = 0; i < 10; i++)
  {
    /* code */
    for (ll j = 0; j <= i; j++)
    {
      for (ll z = 0; z <= i - j; z++)
      {
        /* code */

        ways[i]++;
      }

      /* code */
    }
  }

  int t;
  cin >> t;
  while (t--)
  {

    // solve();

    string s;
    cin >> s;

    ll ans = 1;

    for (auto e : s)
    {
      ans *= ways[e - '0'];
    }

    cout << ans << endl; 


  }
}
