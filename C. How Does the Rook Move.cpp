#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
  for (auto &i : a)  \
  cin >> i
#define printOutput(a) \
  for (auto &i : a)    \
  cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

long long calculate(int n)
{
  long long dp[300001];
  dp[0] = dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    dp[i] = (dp[i - 1] + 2LL * (i - 1) * dp[i - 2]) % MOD;
  }
  return dp[n];
}



signed main() {

  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, x, y;
    cin >> n >> k;
    while (k--)
    {
      cin >> x >> y;
      n -= 1 + (x != y);
    }
    cout << calculate(n) << endl;
  }
}



/*

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode" :
        cur = root

        while cur:
            if p.val > cur.val and q.val > cur.val:
                cur = cur.right
            elif p.val < cur.val and q.val < cur.val:
                cur = cur.left
            else:
                return cur





*/