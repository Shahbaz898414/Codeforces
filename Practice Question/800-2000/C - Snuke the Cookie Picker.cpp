#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

  ll n, m;
  cin >> n >> m;

  int H, W, U = 1e9, D = -1e9, L = 1e9, R = -1e9;

  char arr[502][502];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    /* code */
    for (int j = 0; j < m; j++)
    {
      /* code */

      if (s[i][j] == '#')
      {
        U = min(U, i);
        D = max(D, i);
        L = min(U, j);
        R = max(D, j);
      }
    }
  }

  return 0;
}
