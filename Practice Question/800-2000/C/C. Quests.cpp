#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}



void solve() {


  int n, k; cin >> n >> k;


  vector<int> a(n), b(n);


  for (int i = 0; i < n; i++) cin >> a[i];


  for (int i = 0; i < n; i++) cin >> b[i];


  int ans = 0, a1 = 0, b1 = 0;


  for (int i = 0; i < min(n, k); i++) {


    a1 += a[i];


    b1 = max(b1, b[i]);


    ans = max(ans, a1 + b1 * (k - i - 1));


  }


  cout << ans << endl;


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


