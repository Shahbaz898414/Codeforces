
#include <bits/stdc++.h>
using namespace std;

#define int long long

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

  while (tt--) {


    int n, odd = 0, even = 0, sum = 0; cin >> n;



  }
}