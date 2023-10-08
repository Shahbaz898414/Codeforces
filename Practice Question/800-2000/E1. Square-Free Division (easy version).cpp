

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <math.h>
#include <stack>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <utility>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)   \
  for (auto &x : v) \
    cin >> x;
#define vout(x, v) \
  for (auto x : v) \
    cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
// cout <<setprecision(15)
#define NEED_FOR_SPEED_MOST_WANTED  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
using namespace std;

#ifndef ONLINE_JUDGE
#define deb(x)       \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define deb(x)
#endif

void _print(int32_t t)
{
  cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

vii graph[200010];
map<int, int> degree;

void dij(int C, vi &dist)
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  dist[C] = 0;
  pq.push({0, C});
  while (pq.size() > 0)
  {
    pair<int, int> alpha = pq.top();
    pq.pop();
    if (dist[alpha.second] < alpha.first)
      continue;
    for (auto x : graph[alpha.second])
    {
      if (dist[x.first] > dist[alpha.second] + x.second)
      {
        dist[x.first] = dist[alpha.second] + x.second;
        pq.push({dist[x.first], x.first});
      }
    }
  }
}
const int N = 1e5 + 5;
vector<int> adj[N];
int val[N], xor_arr[N];
int vis[(int)1e7 + 1];
int cnt = 0;

int dfs1(int u)
{
  xor_arr[u] = val[u];
  vis[u] = true;

  for (auto v : adj[u])
  {
    if (!vis[v])
    {
      xor_arr[u] ^= dfs1(v);
    }
  }
  return xor_arr[u];
}

int dfs2(int u)
{
  vis[u] = true;
  int tmp = val[u];
  for (auto v : adj[u])
  {
    if (!vis[v])
    {
      tmp ^= dfs2(v);
    }
  }

  if (tmp == xor_arr[0])
  {
    tmp = 0;
    // cout<<v<<"tree"<<endl;
    cnt++;
  }
  return tmp;
}

void solve()
{

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  map<int, int> mp;
  int cnt = 1;
  for (int x : a)
  {
    cin >> x;
    if (mp[x /= vis[x]])
      mp.clear(), cnt++;
    mp[x] = 1;
  }
  cout << cnt << '\n';
}

signed main()
{
  NEED_FOR_SPEED_MOST_WANTED;
  // #ifndef ONLINE_JUDGE
  // FOR GETTING INPUT FROM input.txt
  // freopen("input.txt", "r", stdin);
  // FOR GETTING INPUT FROM input.txt
  // freopen("output.txt", "w", stdout);
  //	#endif

  for (int i = 1; i * i <= 1e7; i++)
  {
    /* code */
    for (int j = i * i; j <= 1e7; j += i * i)
    {
      /* code */
      vis[j] = i * i;
    }
  }

  int t = 1;

  cin >> t;
  while (t--)
  {
    solve();
    // cout << endl;
  }
}
