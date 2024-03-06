#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

bool check(int k, vector<vector<int>> &seg)
{
  int ll = 0, rr = 0;
  for (auto &e : seg)
  {
    ll = max(ll - k, e[0]);
    rr = min(rr + k, e[1]);
    if (ll > rr)
      return false;
  }

  return true;
}



int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll nt = (n - 1) / 7 + 1;
    ll L = 1, R = n, ans;
    while (L < R)
    {
      ll mid = L + R >> 1ll;
      if (mid * 2 > nt)
        ans = nt * t + mid * l;
      else
        ans = mid * (2 * t + l);
      if (ans >= p)
        R = mid;
      else
        L = mid + 1;
    }
    cout << n - L << '\n';
  }
}


