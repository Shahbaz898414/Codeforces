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

void solve()
{

  int n;
  cin >> n;
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[a[i] - 1];
  }
  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << " ";
  }
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << b[i] << " ";
  }
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
