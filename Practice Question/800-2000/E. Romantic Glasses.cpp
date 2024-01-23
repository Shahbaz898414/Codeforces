
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

void solve() {
    
    int n;
    cin >> n;
    
    vector<int> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i & 1) a[i] *= -1;
    }
    
    long long sum = 0;
    set<long long> st {0};
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (st.find(sum) != st.end()) {
            cout << "YES" << endl;
            return;
        }
        st.insert (sum);
    }
    
    cout << "NO" << endl;
    
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

    solve();
    
   
  }

}



