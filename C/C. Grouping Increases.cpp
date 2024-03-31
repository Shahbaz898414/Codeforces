#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  int tt;
  cin >> tt;

  while (tt--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int penalty = 0;
    int lo = n + 1, hi = n + 1;

    for (int i = 0; i < n; i++) {

      if (lo > hi) swap(lo, hi);
      if (a[i] <= lo) {
        lo = a[i];
        // cout << "a[i]<=lo " << i << endl;
      }
      else if (a[i] > hi)
      {
        penalty++, lo = a[i];
        // cout << "a[i] > lo " << i << endl;
      }
      else
      {

        // cout << "else " << i << endl;
        hi = a[i];


      }


    }



    cout << penalty << endl;


  }
}