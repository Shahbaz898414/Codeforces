#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

typedef long long ll;
#define pb push_back
#define fi first
#define se second

// ll bit(ll x, ll y)
// {
//   ll vnt = 1, vbg = x;
//   while (y > 0)
//   {
//     if (y % 2)
//       vnt *= vbg, vnt %= mod;
//     vbg *= vbg, y /= 2, vbg %= mod;
//   }
//   return vnt;
// }

int main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n;
    // vector<ll> v(n);

    // for (ll i = 0; i < n; i++)
    //   cin >> v[i];
    //  sort(v.begin(),v.end());

    int cnt = 1;

    int b1, b2, b3;

    vector<int> points[n];
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      points[a].push_back(b);
    }
    for (int i = 0; i < n; i++)
      sort(points[i].rbegin(), points[i].rend());

    ll res = 0;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < points[i].size() && j <= i; j++)
        res += points[i][j] + 1;

      
    cout << res << endl;

    
  }
}