#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
    ll n;
    cin>>n;
    vector<ll>adj[n+1];
    
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    ll q;
    cin>>q;
    
    ll leaf[n+1]={0};
    
    dfs(1,-1,adj,leaf);
    
    for(ll i=0;i<q;i++){
        ll x,y;
        cin>>x>>y;
        ll ans=leaf[x]*leaf[y];
        cout<<ans<<"\n";
    }
    
  }

  return 0;
}
