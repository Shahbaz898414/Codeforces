#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {


        cout << j << " " << i - j << endl;


        return;
        
      }
    }
  }

  cout << -1 << endl;
}

signed main()
{

  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
}

