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
ll dp[mxn][7][2], n;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  _test {
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }
  }
}