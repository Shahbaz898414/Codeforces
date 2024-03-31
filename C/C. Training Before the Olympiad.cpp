
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


    vector<int> a(n);


    for (auto &i : a) cin >> i;



    for (int i = 0; i < n; i++) {
      sum += a[i];
      odd += (a[i] % 2 == 1);
      even += (a[i] % 2 == 0);

      if (i == 0)
        cout << sum << " ";
      else
        cout << sum - (odd / 3) - (odd % 3 == 1) << " ";
    }


    cout << "\n";


  }
}