#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test   \
  int _TEST;    \
  cin >> _TEST; \
  while (_TEST--)
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back

const int mxn = 200005;
ll val[] = {1, 10, 100, 1000, 10000};
// ll dp[mxn][7][2], n;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  sort(a.begin(), a.end());
  if (a[0] != 1)
  {
    cout << "NO\n";
    return;
  }

  vector<int> dp(5005, 0);

  dp[1] = 1;

  for (int i = 1; i < n; ++i)
  {
    if (!dp[a[i]])
    {
      cout << "NO\n";
      return;
    }
    for (int j = 5000; j >= a[i]; --j)
    {
      dp[j] |= dp[j - a[i]];
    }
  }

  // for (int j = 0; j <5000; j++)
  //   {
  //     cout<<dp[j] <<" ";
  //   }

  //   cout<<endl;

  cout << "YES\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  _test
  {
    // ll n;
    // cin >> n;
    // ll arr[n];

    // for (ll i = 0; i < n; i++) {
    //   cin >> arr[i];
    // }

    // sort(arr,arr+n);

    // if(arr[0]!=-1){
    //   cout<<"NO"<<endl;
    //   continue;
    // }

    solve();
  }
}