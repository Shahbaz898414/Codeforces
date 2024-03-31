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

  ll n;
  cin >> n;
  vector<ll> l(n);
  vector<ll> r(n);
  vector<ll> c(n);
  set<ll> st;
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
    st.insert(-l[i]);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> r[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }

  // for(auto it:st){
  //   cout<<it<<" ";
  // }

  // cout<<endl;
  // cout<<endl;

  vector<int> ans;

  sort(r.begin(), r.end());

  for (int i = 0; i < n; i++)
  {
    auto it = st.lower_bound(-r[i]);
    // cout<<*(it)<<" "<<r[i]<<endl;
    ans.push_back(*(it) + r[i]);
    st.erase(it);
  }

  sort(ans.begin(), ans.end());


  // cout<<endl;
  // for(auto it:ans){
  //   cout<<it<<" ";
  // }
  // cout<<endl;


  sort(c.rbegin(), c.rend());

  // for(auto it:c){
  //   cout<<it<<" ";
  // }

  // cout<<endl;
  ll sum = 0;
  for (int i = 0; i < n; i++) sum += (c[i] * ans[i]);



  cout << sum << endl;

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
