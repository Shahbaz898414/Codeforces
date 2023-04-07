#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin >> t;

  while (t-- > 0)
  {

    ll x, y;
    cin >> x >> y;
    if (x < y)
    {
      ll ans;
      if (y % 2 != 0)
      {
        ans = (y * y) - x + 1;
      }
      else
      {
        ans = ((y - 1) * (y - 1)) + x;
      }
      cout << ans << endl;
    }
    else
    {
      ll ans;
      if (x % 2 != 0)
      {
        ans = ((x - 1) * (x - 1)) + y;
      }
      else
      {
        ans = (x * x) - y + 1;
      }
      cout << ans << endl;
    }
  }
  return 0;
}