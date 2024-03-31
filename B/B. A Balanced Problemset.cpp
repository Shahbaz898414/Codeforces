#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

void solve()
{

  int x, n;
  cin >> x >> n;
  int ans = 1;
  for (int i = 1; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      if (n <= x / i)
        ans = max(ans, i);
      if (n <= i)
        ans = max(ans, x / i);
    }
  }
  cout << ans << '\n';
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}




/*


Today was my 16th day out of the 75 days hard challenge.
So today. I solved 5 question.


1. C. Game with Multiset (https://codeforces.com/contest/1913/problem/C).


2. 739. Daily Temperatures (https://leetcode.com/problems/daily-temperatures/description/?envType=daily-question&envId=2024-01-31)


3. A. We Got Everything Covered! (https://codeforces.com/contest/1925/problem/A).


4. B. A Balanced Problemset? (https://codeforces.com/contest/1925/problem/B).

5. Game on Array  (https://www.codechef.com/problems/AGAME).

*/