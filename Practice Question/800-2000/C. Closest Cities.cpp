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

  int n; cin>>n;
 
  vector<int> a(n), b(n);
  for(auto &e: a)     cin>>e;


       
        int m;cin>>m;



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


Today was my 14th day out of the 75 days hard challenge.
So today. I solved 5 question.

1. 232. Implement Queue using Stacks (https://leetcode.com/problems/implement-queue-using-stacks/description/?envType=daily-question&envId=2024-01-29).

2. D - Three Activities (https://codeforces.com/contest/1914/problem/D).

3. E1 - Game with Marbles (Easy Version) (https://codeforces.com/contest/1914/problem/E1)

4. E2 - Game with Marbles (Hard Version) (https://codeforces.com/contest/1914/problem/E2).

5. C. Closest Cities (https://codeforces.com/contest/1922/problem/C).

*/