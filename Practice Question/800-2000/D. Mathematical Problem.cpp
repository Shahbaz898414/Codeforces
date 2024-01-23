
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

  while (tt--)
  {

    int n; cin >> n;

    int count = n;

    if (n == 1) {
      cout << 1 << "\n"; continue;
    }


    count--;


    cout << "196" + string(n - 3, '0') << "\n";


    for (int dist = 0; dist * 2 + 3 <= n; dist++) {
      if (count)
      {
        count--;
        cout << "1" + string(dist, '0') + "6" + string(dist, '0') + "9" + string(n - (dist * 2 + 3), '0') << "\n";
      }
      if (count)
      {
        count--;
        cout << "9" + string(dist, '0') + "6" + string(dist, '0') + "1" + string(n - (dist * 2 + 3), '0') << "\n";
      }
    }


  }


}















