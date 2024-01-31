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

    int m;
    cin >> m;
    
    vector<int> bits (31, 0);
    
    while (m--) {
        int t, v;
        cin >> t >> v;
        
        if (t == 1) {
            bits[v]++;
        }
        
        else {
            for (int i = 29; i >= 0; i--) {
                int mn = min (v >> i, bits[i]);
                v -= mn * (1 << i);
            }
            cout << (v == 0 ? "YES" : "NO") << endl;
        }
    }

  




}



signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int tt;
  // cin >> tt;

  // while (tt--)
  // {

    solve();
  // }
}
