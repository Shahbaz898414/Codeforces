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
      return false;
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
    long long a[n], c = 1, b = 0, x, s = 0;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    if (n == 1)
    {
      cout << 1 << endl;
      continue;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
      b = __gcd(b, a[n - 1] - a[i]);
    for (int i = 0; i < n; i++)
      s += (a[n - 1] - a[i]) / b;
    x = a[n - 1] - b;
    for (int i = n - 2; i >= 0; i--)
    {
      if (x != a[i])
        break;
      x -= b;
      c++;
    }
    cout << s + c << endl;
  }
}
