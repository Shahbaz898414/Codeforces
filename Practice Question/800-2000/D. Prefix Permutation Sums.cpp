

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

bool cmp(string a, string b)
{
  return a + b < b + a;
}


ll n;

bool isPermutation(vector<ll> a) {
    for (int i = 0; i < n; ++i) {
        if (a[i] <= 0 || a[i] > n) {
            return false;
        }
    }
    set<ll> s(a.begin(), a.end());
    return s.size() == n;
}



vector<ll> prefSumToArray(vector<ll> p) {
  
    vector<ll> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i) {
        res[i] = p[i] - p[i - 1];
    }
    return res;

}



void solve() {
    cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i + 1 < n; ++i) {
        cin >> a[i];
    }
    ll x = n * (n + 1) / 2;
    if (a.back() != x) {
        a.push_back(x);
        vector<ll> b = prefSumToArray(a);
        if (isPermutation(b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }

    map<ll, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n - 1; ++i) {
        cnt[a[i] - a[i - 1]]++;
    }
    vector<int> cntGt1;
    for (auto p: cnt) {
        if (p.second > 1) {
            cntGt1.push_back(p.first);
        }
    }
    if (cntGt1.size() > 1) {
        cout << "NO\n";
        return;
    }
    if (cntGt1.size() == 1) {
        int x1 = cntGt1[0];
        if (cnt[x1] > 2) {
            cout << "NO\n";
            return;
        }
    }
    vector<int> cnt0;
    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == 0) {
            cnt0.push_back(i);
        }
    }
    if (cnt0.size() != 2) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}



signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--)
  
   solve();
   


  

  return 0;
}
