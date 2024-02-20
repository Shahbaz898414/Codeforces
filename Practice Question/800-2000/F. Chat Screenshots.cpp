#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 998244353

bool check(int k, vector<vector<int>> &seg)
{
  int ll = 0, rr = 0;
  for (auto &e : seg)
  {
    ll = max(ll - k, e[0]);
    rr = min(rr + k, e[1]);
    if (ll > rr)
      return false;
  }

  return true;
}

int solve(vector<vector<int>> &seg)
{
  int l = -1, r = 1e9;
  while (r - l > 1)
  {
    int mid = (r + l) / 2;
    if (check(mid, seg))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  return r;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    int n, k, cycle = false;
    cin >> n >> k;
    set<int> adj[n + 1];

    vector<int> vis(n + 1), dfsVis(n + 1);

    for (int i = 0; i < k; i++) {
  
      vector<int> a(n);
      for (auto &j : a) cin >> j;

      for (int j = 2; j < n; j++)
        adj[a[j - 1]].insert(a[j]);
      
    }

    function<void(int)> dfs = [&](int node)
    {
      vis[node] = 1;
      dfsVis[node] = 1;

      for (auto &i : adj[node])
      {
        if (dfsVis[i])
          cycle = true;
        else if (!vis[i])
          dfs(i);
      }

      dfsVis[node] = 0;

    };

    for (int i = 1; i <= n; i++)
    {
      if (!vis[i])
        dfs(i);
    }


    if (cycle) cout << "NO\n";

    else cout << "YES\n";


  }
}


/*


𝐓𝐨𝐝𝐚𝐲 𝐰𝐚𝐬 𝐦𝐲 𝟑𝟓𝐬𝐭 𝐝𝐚𝐲 𝐨𝐮𝐭 𝐨𝐟 𝐭𝐡𝐞 𝟕𝟓 𝐝𝐚𝐲𝐬 𝐨𝐟 𝐡𝐚𝐫𝐝 𝐜𝐡𝐚𝐥𝐥𝐞𝐧𝐠𝐞𝐬. 𝐒𝐨 𝐭𝐨𝐝𝐚𝐲. 𝐈 𝐬𝐨𝐥𝐯𝐞𝐝 𝟓 𝐪𝐮𝐞𝐬𝐭𝐢𝐨𝐧𝐬.

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟏 : F. Chat Screenshots
Question is very simple, we need to use Topological Sorting.
we just have to find cycle in directed graph.we need  cycle=false;
set<int> adj[n + 1]; // build adj matrix
vector<int> vis(n + 1), dfsVis(n + 1);  Run dfs function then set vis[node] = 1,dfsVis[node] = 1, then Run For  loop on (&i : adj[node]),  In For loop If  dfsVis[i]==1 then set cycle=true; Else call dfs(i); Outside of For loop  set dfsVis[node] = 0;
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://codeforces.com/contest/1931/problem/F]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟐 : E. Anna and the Valentine's Day Gift
Players take turns removing numbers from a list until only one remains; if that number is ≥ 10^M, Sasha wins; otherwise, Anna wins. Very imp thing final element should have atleast M+1 digit. Anna strategy is pick element with most ending zeroes and reverse it. Sasha strategy follows by selecting the largest ending zero and combines it with another number.Store trailing zero of every A[i] in vector zero and then store digit in Sum variables, then store odd index zero[i] in sum variables and then  cout << (sum > m ? "Sasha" : "Anna") << "\n";
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗 : [https://codeforces.com/problemset/problem/1931/E]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟑 : D. Divisible Pairs
The number of beautiful pairs it is said to be beautiful If (A[i]+A[j]) %X ==0 and (A[i]-A[j])%Y==0. After solving these to equation we got 
1. A[j] % X = (X - A[i] % X) % X
2. A[i] % Y = A[j] % Y
we use map<pair<ll,ll>,ll>Mp; In For Loop xMod = (X - (A[i] % X)) % X ;  yMod = A[i] % Y; answer += Mp[{xMod, yMod}]; Mp[{A[i] % X, A[i] % Y}]++;
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://codeforces.com/problemset/problem/1931/D]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟒 : 𝐀 - 𝐑𝐞𝐜𝐨𝐯𝐞𝐫𝐢𝐧𝐠 𝐚 𝐒𝐦𝐚𝐥𝐥 𝐒𝐭𝐫𝐢𝐧𝐠
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dkAJK6rW]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟓 : 𝐁 - 𝐌𝐚𝐤𝐞 𝐄𝐪𝐮𝐚𝐥
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/d59g29MY]


#75dayschallenge
#challenge
#consistency
#Cp
#lessons
#learning 


*/