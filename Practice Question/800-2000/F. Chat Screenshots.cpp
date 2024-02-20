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
