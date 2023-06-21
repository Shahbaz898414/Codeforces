#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    ll cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
      /* code */
      if (v[i] <= q)
      {
        cnt++;
      }
      else
      {

        if (cnt >= k)
        {
          ans = ans + cnt - k + 1;
        }
        cnt++;
      }

      if (cnt >= k)
      {
        ans = ans + cnt - k + 1;
      }
    }

    cout << cnt << endl;
  }
}
