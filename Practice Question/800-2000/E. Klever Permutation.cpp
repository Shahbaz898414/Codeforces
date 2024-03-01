#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {

    ll n, k;
    cin >> n >> k;

    vector<ll> arr;
    ll x = n - k;
    ll b = x / 2;
    ll a = (x / 2);

    arr.push_back(1);
    arr.push_back(n);

    int k2 = k / 2;

    for (int i = 1; i < k / 2; i++)
    {
      int adiff, bdiff;
      if (a % k2 != 0)
      {
        adiff = (a / k2) + 1;
        a -= ((a / k2) + 1);
      }
      else
      {
        adiff = (a / k2);
        a -= ((a / k2));
      }
      if (b % k2 != 0)
      {
        bdiff = (b / k2) + 1;
        b -= ((b / k2) + 1);
      }
      else
      {
        bdiff = (b / k2);
        b -= ((b / k2));
      }
      arr.push_back(arr[arr.size() - 2] + adiff + 1);
      arr.push_back(arr[arr.size() - 2] - (bdiff + 1));
      k2--;
    }
  }
  return 0;
}
