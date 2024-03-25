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
    int n;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
      
      cin >> ar[i];
    }

    int mx = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
      
      if (ar[i] < mx) ans = 0;
      else {
        if (ar[i] > 9 && ar[i] / 10 >= mx && ar[i] % 10 >= ar[i] / 10)
          mx = ar[i] % 10;
        else
          mx = ar[i];
      }
    }

    cout << (ans ? "YES" : "NO") << endl;
  }
}
