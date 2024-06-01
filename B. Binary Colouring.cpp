#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll x;
    cin >> x;
    vector<int> res(31, 0);
    for (int i = 0; i < 30; i++)
    {
      if (1ll & (x >> i))
      {
        if (res[i])
        {
          res[i + 1] = 1;
          res[i] = 0;
        }
        else if (i > 0)
        {
          if (res[i - 1] == 1)
          {
            res[i + 1] = 1;
            res[i - 1] = -1;
          }
          else
          {
            res[i] = 1;
          }
        }
        else if (i == 0)
        {
          res[i] = 1;
        }
      }
    }
    cout << 31 << '\n';
    for (int i = 0; i <= 30; i++)
    {
      cout << res[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
