#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define printv(v)                      \
  for (int i = 0; i < (v.size()); i++) \
  {                                    \
    cout << v[i] << " ";               \
  }                                    \
  line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define tk(x) \
  int x;      \
  cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t)
{
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
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
void _print(vector<vector<T>> v)
{
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++)
  {
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
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

// const long long inf = 1e18;
// const int MOD = 998244353;
// const int MAX = 1e6;

bool isValid(string s)
{
  int len = s.size();
  for (int i = 0; i < len / 2; i++)
  {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

void rotateMatrix(vector<vector<int>> &v, int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = i; j < n - i - 1; j++)
    {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}

ll m = 998244353;

long long erfd(long long a, long long b)
{
  if (b == 0)
    return 1;
  long long ans = erfd(a, b / 2);
  if (b % 2)
    return (ans % m * ans % m * a) % m;
  else
    return ans % m * ans % m;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {

    int n, m;
    cin >> n >> m;
    long long cost[n];

    for (int i = 0; i < n; ++i)
      cin >> cost[i];

    for (int i = 0; i < m; ++i)
    {
      int idx;
      cin >> idx;
      cost[idx - 1] = 0;
    }

    vector<int> indegree(n);
    vector<vector<int>> graph(n);
    vector<vector<int>> P(n);
    for (int i = 0; i < n; ++i)
    {
      int k;
      cin >> k;
      vector<int> temp;
      for (int j = 0; j < k; ++j)
      {
        int x;
        cin >> x;
        temp.push_back(x - 1);
        graph[x - 1].push_back(i);
        indegree[i]++;
      }
      P[i] = temp;
    }

    queue<int> bfs;
    vector<int> first;
    for (int i = 0; i < n; ++i)
    {
      if (indegree[i] == 0)
      {
        bfs.push(i);
        indegree[i]--;
        first.push_back(i);
      }
    }

    while (!bfs.empty())
    {
      int node = bfs.front();
      bfs.pop();
      for (auto &x : graph[node])
      {
        indegree[x]--;
        if (indegree[x] == 0)
        {
          bfs.push(x);
          first.push_back(x);
        }
      }
    }

    for (auto &x : first)
    {
      cout << x << " -";
      long long tot = 0;
      for (auto &y : P[x])
      {
        cout << y << " " << cost[y] << "\n";
        tot += cost[y];
      }
      cout << tot << " \n";
      if (P[x].size())
        cost[x] = min(cost[x], tot);
    }

    cout << "\n";

    for (auto &x : cost)
      cout << x << " ";

    cout << "\n";
  }
  return 0;
}
