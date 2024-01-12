#include <iostream>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    int s = 0, f0 = 0;
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] < 0)
      {
        s++;
      }
      if (a[i] == 0)
      {
        f0 = 1;
      }
    }
    if (s % 2 == 1 || f0 == 1)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << 1 << endl;
      cout << 1 << " " << 0 << endl;
    }
  }

  return 0;
}
