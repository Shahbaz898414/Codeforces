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

void solve()
{
  string s;
  cin >> s;
  int m;
  cin >> m;
  string L, R;
  cin >> L >> R;
  int it = -1;
  for (int i = 0; i < m; i++)
  {
    int st = it + 1;
    for (char x = L[i]; x <= R[i]; x++)
    {
      int tmp = s.find(x, st);
      if (tmp == -1)
      {
        puts("YES");
        return;
      }
      it = max(it, tmp);
    }
  }
  puts("NO");
}

signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {

    ll n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
      /* code */
      int x, y;
      cin >> x >> y;
      v.push_back({x, y});
    }

    map<int, int> f1, f2, dx, dy;

    int ans = 0;

    for (auto it : v)
    {
      if (f1.find(it.ss - it.ff) != f1.end())
        ans += f1[it.ss - it.ff] * 2;

      if (f2.find(it.ss +it.ff) != f2.end())
        ans += f2[it.ss + it.ff] * 2;

      if (dx.find(it.ff) != dx.end())
        ans += dx[it.ff] * 2;

      if (dy.find(it.ss) != dy.end())
        ans += dy[it.ss] * 2;


      ++f1[it.ss - it.ff];

      ++f2[it.ss + it.ff];

      ++dx[it.ff];

      ++dy[it.ss];

    }

    cout << ans << endl;
  }
  return 0;
}
