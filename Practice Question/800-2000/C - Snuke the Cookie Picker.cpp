#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

  ll n, m;
  cin >> n >> m;

  int  U = 1e9, D = -1e9, L = 1e9, R = -1e9;

  char arr[502][502];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {

      if (arr[i][j] == '#')
      {
        U = min(U, i);
        D = max(D, i);
        L = min(L, j);
        R = max(R, j);
      }
    }
  }

  // cout<<U<<" "<<D<<" "<<L<<" "<<R<<endl;

  for (int i = U; i <= D; i++)
    for (int j = L; j <= R; j++)
      if (arr[i][j] == '.')
        cout << i + 1 << " " << j + 1 << endl;

  return 0;
}
