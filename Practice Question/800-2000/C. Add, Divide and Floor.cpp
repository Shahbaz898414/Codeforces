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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    vector<int> ans;

    while (mn != mx) {
      int x = (mn % 2 == 1) && (mx % 2 == 0);
      ans.push_back(x);
      mn = (mn + x) / 2;
      mx = (mx + x) / 2;
    }


    cout << ans.size() << endl;

    if(!ans.empty() && ans.size() <= n) {


      for (int x : ans) cout << x << " ";


      cout << endl;


    }


  }
}
