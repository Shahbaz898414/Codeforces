
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

    int a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
      cout << b * (b / a) << endl;
    }
    else
    {
      cout << lcm(a, b) << endl;
    }
  }