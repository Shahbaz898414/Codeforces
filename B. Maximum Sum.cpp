#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
  for (auto &i : a)  \
  cin >> i
#define printOutput(a) \
  for (auto &i : a)    \
  cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> ar(n);

    // int sum = 0;

    int mx = 0, mx1 = INT_MIN, cnt = 0;

    int sum = 0, s = 0, maxs = 0;

    for (int i = 0; i < n; i++)
    {

      cin >> ar[i];
      // sum += ar[i];
    }

    for (int i = 0; i < n; i++)
    {

      sum += ar[i], s += ar[i];
      if (s < 0)
        s = 0;
      maxs = max(maxs, s);
    }

    s = maxs, sum -= maxs;
    for (int i = 1; i <= k; i++)
      s = s * 2 % MOD;
    sum = ((sum + s) % MOD + MOD) % MOD;

    cout << sum << endl;
  }
}

