#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

bool check(int k, vector<vector<int>> &seg)
{
  int ll = 0, rr = 0;
  for (auto &e : seg)
  {
    ll = max(ll - k, e[0]);
    rr = min(rr + k, e[1]);
    if (ll > rr)
      return false;
  }

  return true;
}

int solve(vector<vector<int>> &seg)
{
  int l = -1, r = 1e9;
  while (r - l > 1)
  {
    int mid = (r + l) / 2;
    if (check(mid, seg))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  return r;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    int n;
    cin >> n;
    int arr[n];
    ll suf[n + 1] = {0};
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }


    for (int i = n - 1; i >= 0; i--)
    {

      suf[i] = suf[i + 1] + arr[i];

      // cout<<suf[i]<<" ";

    }

    // cout<<endl;

    long long ans = suf[0];

    for (int i = 1; i < n; i++) {
      if (suf[i] > 0) {
        ans += suf[i];
      }
    }


    cout << ans << "\n";


    // cout<<endl;


  }
}

