#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {

    int n, c1 = 0, c2 = 0, ctr = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      if (s[i] == ')') ctr++;
      else ctr--;

      if (ctr < 0) {
        c1 = 1;
        a[i] = 1;
      } else if (ctr > 0) {
        c2 = 1;
        a[i] = 2;
      } else
        a[i] = a[i - 1];
    }

    if (ctr != 0)
      cout << -1 << endl;
    else {
      if (c2 && c1) {
        cout << 2 << endl;
        for (int i = 0; i < n; i++)
          cout << a[i] << " ";
        cout << endl;
      }
      else
      {
        cout << 1 << endl;
        for (int i = 0; i < n; i++)
          cout << 1 << " ";
        cout << endl;
      }
    }
  }
}

