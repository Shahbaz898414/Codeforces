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

  ll n, m;
  cin >> n >> m;

  vector<pair<ll, ll>> adj[n];

  for (ll i = 0; i < m; i++)
  {

    ll u, v, w;
    cin >> u >> v >> w;

    u--;
    v--;

    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  vector<ll> s(n);

  for (ll i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  vector<vector<ll>> dist(n, vector<ll>(n, 1e17));
  vector<vector<ll>> vis(n, vector<ll>(n, 0));

  priority_queue<array<ll, 3>, vector<array<ll, 3>>, greater<array<ll, 3>>> pq;

  dist[0][0] = 0;
  pq.push({0, 0, 0});

  // dist[0][0] = 0;
  // pq.push({0, 0, 0});

  while (!pq.empty())
  {
    ll city = pq.top()[1];
    ll bike = pq.top()[2];
    pq.pop();

    if (city == n - 1)
    {
      cout << dist[city][bike] << endl;
      return;
    }

    if (vis[city][bike])
      continue;
    vis[city][bike] = 1;

    for (auto it : adj[city])
    {
      ll nbr = it.first;
      ll wt = it.second;

      ll newBike = bike;
      if (s[nbr] < s[bike])
        newBike = nbr;

      if (dist[nbr][newBike] < dist[city][bike] + wt * s[bike])
        continue;

      dist[nbr][newBike] = dist[city][bike] + wt * s[bike];
      pq.push({dist[nbr][newBike], nbr, newBike});
    }
  }

  cout << -1 << endl;


}



signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  while (tt--)
  {

    solve();
  }
}
