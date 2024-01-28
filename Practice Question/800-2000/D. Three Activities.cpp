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

  vector<int> a(n), b(n), c(n);
  for (int &e : a)
    cin >> e;
  for (int &e : b)
    cin >> e;
  for (int &e : c)
    cin >> e;

  multiset<pair<int, int>> x, y;

  for (int i = 0; i < n; i++)
  {
    x.insert({b[i], i});
    y.insert({c[i], i});
  }

  int ans = 0;

  for (int i = 0; i < n; i++) {


    x.erase({b[i], i});

    y.erase({c[i], i});

    if ((*x.rbegin()).second == (*y.rbegin()).second)
      ans = max({ans, a[i] + (*(--x.end())).first + (*(--(--y.end()))).first,
                 a[i] + (*(--y.end())).first + (*(--(--x.end()))).first});
    else
      ans = max(ans, a[i] + (*(--x.end())).first + (*(--y.end())).first);



    x.insert({b[i], i});


    y.insert({c[i], i});


  }

  cout << ans << "\n";


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
