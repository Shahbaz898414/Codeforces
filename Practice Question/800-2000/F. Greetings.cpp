
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

void solve()
{

  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(2));
  for (int i = 0; i < n; i++)
  {
    cin >> a[i][0] >> a[i][1];
  }

  sort(a.begin(), a.end());

  set<int> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(a[i][1]);
  }

  long long ans = 0;

  for (int i = 0; i < n; i++)
  {
    ans += st.order_of_key(a[i][1]);
    st.erase(a[i][1]);
  }

  cout << ans << endl;
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

  while (tt--)
  {

    solve();
  }
}
