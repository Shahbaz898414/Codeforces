#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
// #include "algo/debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#endif

void solve()
{

  int n, k, x;
  cin >> n >> k >> x;

  int arr[n + 1];

  for (int i = 1; i <= n; i++)
  {
    /* code */
    cin >> arr[i];
  }

  sort(arr + 1, arr + n + 1);

  int pref[n + 1];

  pref[0] = 0;

  for (int i = 1; i <= n; i++)
  {
    /* code */
    pref[i] = arr[i] + pref[i - 1];
  }

  int ans = INT_MIN;

  for (int i = n; i >= 0; i--)
  {
    /* code */
    int ch = (n - i);

    if (ch > k)
      break;

    int r = min(r, i);

    int sum = (pref[i - r] - (pref[i] - pref[r]));

    ans = max(ans, sum);
  }

  cout << ans << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;

  for (int tc = 1; tc <= t; tc++)
  {
    // debug(Testcase, tc);
    solve();
    // dbg();
  }

  return 0;
}

/*


n=8  k=5  x=3

5 5 3 3 3 2 9 9
ans= -5

9 9 5 5 3 3 3 2

3 3 2

-3 -3 -2








*/