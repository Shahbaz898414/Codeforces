#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    ll x, k, g;
    cin >> x >> k >> g;
    
    ll m = x * ((g - 1) / 2) / g;

    cout << min(k, m) * g << endl;
  }


  return 0;
}
