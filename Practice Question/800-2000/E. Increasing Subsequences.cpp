#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

vector<int> f(long long x)
{
  vector<int> res;
  if (x == 2)
  {
    res.push_back(0);
  }
  else if (x & 1)
  {
    res = f(x - 1);
    res.push_back(*min_element(res.begin(), res.end()) - 1);
  }
  else
  {
    res = f(x / 2);
    res.push_back(*max_element(res.begin(), res.end()) + 1);
  }
  return res;
}



void solve()
{
  long long x;
  cin >> x;
  auto ans = f(x);
  cout << ans.size() << '\n';
  for (int i : ans) cout << i << ' ';
  cout << '\n';
}



signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}


/*


*/