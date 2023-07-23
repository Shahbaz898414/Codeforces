#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k, x = 0, cnt;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    ll mi = INT_MAX;

    for (ll i = 1; i < n; ++i)
    {
      mi = min(mi, abs(arr[i] - arr[i - 1]));
    }
    cout << (mi / 2 + 1) << endl;
  }
}