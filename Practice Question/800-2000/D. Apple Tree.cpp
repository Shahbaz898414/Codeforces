#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll s, ll p, vector<ll> adj[], ll leaf[])
{
  bool any = false;

  for (auto e : adj[s])
  {
    if (e == p)
      continue;
    any = true;
    dfs(e, s, adj, leaf);
    leaf[s] += leaf[e];
  }

  if (!any)
    leaf[s]++;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    ll n; cin >> n;

    vector<pair<ll,ll>> arr(n);

    vector<ll> adj[n + 1];

    for (int i = 0; i < n; i++)
    {
      ll x, y;
      cin >> x >> y;
      // v.push_back({x,y})
      adj[y].push_back(x);
      adj[x].push_back(y);
    }

    ll q; cin >> q;

    ll leaf[n + 1] = {0};

    dfs(1, -1, adj, leaf);
  }

  return 0;
}
