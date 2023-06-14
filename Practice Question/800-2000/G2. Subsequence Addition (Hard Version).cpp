#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test   \
  int _TEST;    \
  cin >> _TEST; \
  while (_TEST--)
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back

const int mxn = 200005;
ll val[] = {1, 10, 100, 1000, 10000};
// ll dp[mxn][7][2], n;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, c[5003];
  cin >> t;
  while (t--)
  {
    int n, f = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> c[i];
    sort(c + 1, c + 1 + n);
    long long sum = 1;
    if (c[1] != 1)
    {
      f = 1;
    }
    for (int i = 2; i <= n; i++)
    {
      if (c[i] > sum)
      {
        f = 1;
      }
      sum += c[i];
    }
    if (f == 1)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}