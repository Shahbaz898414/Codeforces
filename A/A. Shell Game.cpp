/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int x = 1, k, i, a, b;
  cin >> x;
  // while (x-- > 0)
  // {
    k = x;

    for (i = 1; i <= 3; i++)
    {
      cin >> a >> b;

      if (k == a)
        k = b;
      else if (k == b)
        k = a;
    }

    cout << k << endl;
  // }

  return 0;
}