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
#define fr(i, a, b) for (int i = a; i < b; i++)
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

const long long inf = 1e18;
const int MOD = 998244353;
const int MAX = 1e6;

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

bool isregular(string t)
{
  int n = t.length(), co = 0;
  fr(i, 0, n)
  {
    if (t[i] == ')')
      co--;
    else
      co++;
    if (co < 0)
      return false;
  }
  if (co > 0)
    return false;
  return true;
}



int32_t main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int m[n][n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      arr[i] = (1 << 30) - 1;
      // cout<<arr[i]<<" ";
    }

    // cout<<endl;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> m[i][j];
        if (i != j)
        {
          // cout<<arr[i]<<" "<<arr[j]<<" ";
          arr[i] &= m[i][j];
          arr[j] &= m[i][j];
          // cout<<arr[i]<<" "<<arr[j]<<endl;
        }
      }
    }

    // for (int i = 0; i < n; i++)
    // {
    //   // arr[i] = (1 << 30) - 1;
    //   cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i != j && (arr[i] | arr[j]) != m[i][j])
        {
          ok = false;
        }
      }
    }


    if (!ok)
      cout << "NO\n";
    
    else {
      cout << "YES\n";
      for (int i = 0; i < n; i++)
      {
        cout << arr[i] << " ";
      }
      cout << "\n";
    }
  }
}