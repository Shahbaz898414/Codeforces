

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
#define all(x) x.rbegin(), x.rend()
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

int32_t main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1];
    arr[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
      cin >> arr[i];
      arr[i] += arr[i - 1];
      cout << arr[i] << " ";
    }

    cout << endl;
    ll hrr[n];
    for (ll i = 0; i < n; i++)
    {
      cin >> hrr[i];
    }

    ll l = 1, r = n;
    ll ans = 0;

    if (arr[1] <= k)
    {
      ans = 1;
    }

    cout << endl;

    while (r >= l)
    {
      ll mid = (r + l) / 2;

      ll prev = 0;

      ll val = k + 1;

      for (ll i = 1; i < n; i++)
      {
        if (hrr[i - 1] % hrr[i] != 0)
        {
          prev = i;

          cout << i << " " << prev << endl;
        }

        // debug(prev);

        // cout<<prev<<" ";

        ll len = (i - prev + 1);

        if (len >= mid)
        {
          val = min(val, arr[i + 1] - arr[i - mid + 1]);

          cout << len << " " << val << " " << arr[i + 1] << " " << arr[i - mid + 1] << endl;
        }
      }

      cout << endl;

      // debug(val);

      if (val <= k)
      {
        ans = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }

      debug(r);

      debug(l);
    }

    cout << ans << endl;
  }

  return 0;
}
