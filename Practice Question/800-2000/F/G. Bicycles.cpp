#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

void solve()
{

  ll a, b, r;
  cin >> a >> b >> r;
  if (a < b)
    swap(a, b);
  ll x = 1;
  ll c = 0;
  while (x < r)
  {
    x = x << 1;
    c++;
  }
  if (x > r)
    c--;
  ll count = 0;
  ll ans = 0;
  for (int i = c + 1; i < 64; i++)
  {
    if ((((a & (1ll << i))) > 0) && (((b & (1ll << i))) == 0))
    {
      count++;
    }
  }
  for (int i = c; i >= 0; i--)
  {
    if ((((a & (1ll << i))) > 0) && (((b & (1ll << i))) == 0))
    {
      if (count > 0)
      {
        ans += 1ll << i;
        if (ans > r)
        {
          ans -= 1ll << i;
        }
      }
      count++;
    }
  }
  cout << abs((a ^ ans) - (b ^ ans)) << endl;
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}
