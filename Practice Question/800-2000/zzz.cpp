#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{

  int n, q;
  cin >> n >> q;

  vector<ll> a0(n);

  for (ll &x : a0)
    cin >> x;

  for (++q; --q;)
  {

    vector<ll> a = a0;
    ll k;
    cin >> k;
    ll ans = 0, p = (1ll) << 60;
    for (int bit = 60; bit >= 0; --bit)
    {
      ll necess = 0;
      for (ll &x : a)
      {
        necess += max(p - x, 0ll);
        if (necess > k)
          break;
      }
      if (necess <= k)
      {
        ans += p;
        k -= necess;
        for (ll &x : a)
          x = max(x, p);
      }
      for (ll &x : a)
        x %= p;
      p >>= 1;
    }

    cout << ans << endl;
  }
}