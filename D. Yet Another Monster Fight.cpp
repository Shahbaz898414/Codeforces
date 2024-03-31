#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> pre(n, 2e9), suff(n, 2e9);

  for (int i = 0; i < n; i++)
  {
    if (i == 0)
      pre[i] = a[i];
    else
      pre[i] = max(pre[i - 1] + 1, a[i]);
  }

  // for(int i=0;i<n;i++){
  //   cout<<pre[i]<<" ";
  // }
  // cout<<endl;

  for (int i = n - 1; i >= 0; i--)
  {
    if (i == n - 1)
      suff[i] = a[i];
    else
      suff[i] = max(suff[i + 1] + 1, a[i]);
  }


  // for(int i=0;i<n;i++) {
  //   cout<<suff[i]<<" ";
  // }

  // cout<<endl;

  int ans = 2e9;

  // i == 0
  ans = min(ans, suff[0]);

  // i == n - 1
  ans = min(ans, pre[n - 1]);

  for (int i = 1; i < n - 1; i++)
  {
    int curr = 0;
    curr = max(curr, a[i]);
    curr = max(curr, i + 1 + suff[i + 1]);
    curr = max(curr, (n - i) + pre[i - 1]);
    ans = min(ans, curr);
  }

  cout << ans << endl;
}
