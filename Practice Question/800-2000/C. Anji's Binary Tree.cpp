#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;

  while (t--)
  {

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> l(n), r(n);

    for (int i = 0; i < n; i++)
      cin >> l[i] >> r[i];

    vector<int> ans(n);

    vector<int> ll(n, -1), rr(n, -1);

    for (int i = 0; i < n; i++)
    {
      if (l[i] == 0 && r[i] == 0)
        ans[i] = 0;
      else
        ans[i] = 1e9;

      if (l[i])
        ll[l[i] - 1] = i;
      if (r[i])
        rr[r[i] - 1] = i;
    }

    set<pair<int, int>> sp;

    for (int i = 0; i < n; i++)
      sp.insert({ans[i], i});

    while (sp.size())
    {
      auto x = *sp.begin();
      sp.erase(sp.begin());

      if (x.first > ans[x.second])
        continue;

      if (ll[x.second] != -1)
      {
        if (ans[ll[x.second]] > x.first + (s[ll[x.second]] != 'L'))
        {
          ans[ll[x.second]] = x.first + (s[ll[x.second]] != 'L');
          sp.insert({ans[ll[x.second]], ll[x.second]});
        }
      }

      if (rr[x.second] != -1)
      {
        if (ans[rr[x.second]] > x.first + (s[rr[x.second]] != 'R'))
        {
          ans[rr[x.second]] = x.first + (s[rr[x.second]] != 'R');
          sp.insert({ans[rr[x.second]], rr[x.second]});
        }
      }
    }

    cout << ans[0] << "\n";
  }
}




