#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;

  while (t--) {

    int n; cin >> n;

    vector<int> a(n);


    for (int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;
    int last = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > last) ans += a[i] - last;
        last = a[i];
    }
    
    cout << ans - 1 << endl;

  }
}
