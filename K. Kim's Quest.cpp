#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

int main()
{

  // int t;
  // cin >> t;
  // while (t--) {

    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] %= 2;
    }
    
    array<int, 4> dp{};
    
    array<int, 2> cnt{};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        auto g = dp;
        for (int x = 0; x < 2; x++) {
            int y = x ^ a[i];
            dp[y | a[i] << 1] = (dp[y | a[i] << 1] + 0LL + g[x | y << 1])%mod;
            ans = (ans + 0LL + g[x | y << 1])%mod;
        }
        dp[0 | a[i] << 1] += cnt[0];
        dp[0 | a[i] << 1] %= mod;
        dp[1 | a[i] << 1] += cnt[1];
        dp[1 | a[i] << 1] %= mod;
        cnt[a[i]] += 1;
        cnt[a[i]] %= mod;
    }
    
    cout << ans << endl;
    

  // }


}


