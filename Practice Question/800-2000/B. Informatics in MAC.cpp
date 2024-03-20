#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {


    int n;
    scanf("%d", &n);

    map<int, int> mp;

    for (int i = 1; i <= n; i++) {
      int x;
      scanf("%d", &x);
      mp[x]++;
      a[i] = x;
    }

    if (!mp.count(0))
    {
      printf("2\n");
      printf("1 1\n");
      printf("2 %d\n", n);
    }
    else
    {
      int mx = -1;
      for (auto it : mp)
      {
        if (it.first == mx + 1)
          mx++;
        else
          break;
      }
      int i;
      set<int> s;
      for (i = 1; i <= n; i++)
      {
        if (a[i] <= mx)
          s.insert(a[i]);
        if (s.size() == mx + 1)
          break;
      }


      int k = i;
      s.clear();


      for (i = k + 1; i <= n; i++)
      {
        if (a[i] <= mx)
          s.insert(a[i]);
      }


      if (s.size() == mx + 1)
      {
        printf("2\n");
        printf("1 %d\n", k);
        printf("%d %d\n", k + 1, n);
      }
      else
        printf("-1\n");
    }
  }
}