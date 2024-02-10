#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

bool check(int k, vector<vector<int>> &seg)
{
  int ll = 0, rr = 0;
  for (auto &e : seg)
  {
    ll = max(ll - k, e[0]);
    rr = min(rr + k, e[1]);
    if (ll > rr)
    {
      return false;
    }
  }
  return true;
}

int solve(vector<vector<int>> &seg)
{
  int l = -1, r = 1e9;
  while (r - l > 1)
  {
    int mid = (r + l) / 2;
    if (check(mid, seg))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  return r;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    int n;
    cin >> n;
    vector<vector<int>> seg(n, vector<int>(2));
    for (int i = 0; i < n; ++i)
    {
      cin >> seg[i][0] >> seg[i][1];
    }
    cout << solve(seg) << endl;
  }
}
