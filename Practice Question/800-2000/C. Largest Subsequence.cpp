#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {

    int n, cnt = 0, ptr = 0, cost;

    string s, sub = "";

    cin >> n >> s;

    char cur = 'a';

    for (int i = n - 1; i >= 0; i--)
      if (s[i] >= cur)
        cnt++, sub += s[i], cur = s[i], s[i] = '#';

    cost = cnt - count(sub.begin(), sub.end(), sub.back());

    for (int i = 0; i < n; i++)
      if (s[i] == '#')
        s[i] = sub[ptr++];

    cout << (is_sorted(s.begin(), s.end()) ? cost : -1) << '\n';
  }
  return 0;
}
