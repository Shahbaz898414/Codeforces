#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

  ll n;
  cin >> n;
  ll lsum = 0, rsum = 0;
  ll a[n][n];

  for (ll r = 0; r < n; r++)
  {
    for (ll c = 0; c < n; c++)
    {
      cin >> a[r][c];
    }
  }

  if (n % 2 == 0)
  {
    for (ll r = 0; r < n; r++)
    {
      for (int c = 0; c < n; c++)
      {
        if (r == c)
        {
          // cout << "/" << endl;
          lsum += a[r][c];
        }
      }
    }

    for (ll r = 0; r < n; r++)
    {
      for (ll c = 0; c < n; c++)
      {
        if (r + c == n - 1)
        {
          // cout << "/" << endl;
          rsum += a[r][c];
        }
      }
    }

    cout << abs(lsum-rsum) << endl;
  }
  else
  {
    for (ll r = 0; r < n; r++)
    {
      for (int c = 0; c < n; c++)
      {
        if (r == c)
        {
          // cout << a[r][c] << "/"
          //      << " ";
          lsum += a[r][c];
        }
      }
    }
    // cout << endl;
    // cout << lsum << endl;

    for (ll r = 0; r < n; r++)
    {
      for (ll c = 0; c < n; c++)
      {
        if (r + c == n - 1)
        {
          // cout << a[r][c] << "/"
          //      << " ";
          rsum += a[r][c];
        }
      }
    }
    // cout << endl;
    // cout << rsum << endl;
    // yihbk
    cout << abs(rsum-lsum)<< endl;
  }
  return 0;
}
