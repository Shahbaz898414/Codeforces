#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

void solve()
{

  int n;
  cin >> n;

  vector<int> a(n), temp;

  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> a[i];
  }

  if (is_sorted(a.begin(), a.end()))
  {
    cout << 0 << endl;
    return;
  }

  temp = a;

  reverse(temp.begin(), temp.end());
  if (is_sorted(temp.begin(), temp.end()))
  {
    cout << 1 << endl;
    return;
  }

  int f = 0, y = -1, z = -1, cnt = 0;

  auto helper = [&]()
  {
    int mmin = *min_element(a.begin(), a.end());
    int x;

    for (int i = 0; i < n; i++)
    {

      if (a[i] == mmin && a[((i - 1) + n) % n] > a[i])
      {

        x = i;
        break;
      }
    }

    if (!cnt)
      y = x; 
    else
      z = x;

    int j = (x + 1) % n;
    bool chk = 1;

    while (j != x && chk)
    {

      chk &= (a[j] >= a[((j - 1) + n) % n]);
      j++;
      j %= n;
    }

    cnt++;

    return chk;
  };

  auto cyclicSorted = [&]()
  {
    if (helper())
      f ^= 1;
    reverse(a.begin(), a.end());
    if (helper())
      f ^= 2;

    return f;
  };



  if (!cyclicSorted())
  {

    cout << -1 << "\n";

    return;
  }

  int ans = 1e9;

  if (f & 1) ans = min(ans, min(n - y, 2 + y));

  if (f & 2) ans = min(ans, min(1 + n - z, 1 + z));



  cout << ans << endl;


}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
}
