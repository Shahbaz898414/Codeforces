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

void solve() {

   int n, k, m;
   cin >> n >> k >> m;
 
   string str;
   cin >> str;

 
        set<char> st;
        string ans = "";
 

        for (int i = 0; i < m; i++) {
            st.insert(str[i]);
            if (st.size() == k) {
                ans.push_back(str[i]);
                st.clear();
            }
        }

 
        if (ans.length() >= n) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
            char missing;
            for (int j = 0; j < k; j++) {
                char ch = (char)('a' + j);
                if (st.count(ch) == 0) {
                    missing = ch;
                }
            }
            
            while (ans.length() < n) ans.push_back(missing);
            cout << ans << endl;
        }



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



