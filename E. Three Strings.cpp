#include <bits/stdc++.h>
using namespace std;
#define int long long
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

int32_t main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    string a, b, c;
    cin >> a >> b >> c;

    cout << a << " " << b << " " << c << endl;
  }
  return 0;
}

/*

You are given three strings: a , b , and c , consisting of lowercase Latin letters.
The string c  was obtained in the following way:
At each step, either string a  or string b  was randomly chosen, and the first character of the chosen string was removed from it and appended to the end of string c , until one of the strings ran out. After that, the remaining characters of the non-empty string were added to the end of c . Then, a certain number of characters in string c  were randomly changed. For example, from the strings a=abra  and b=cada , without character replacements, the strings caabdraa , abracada , acadabra  could be obtained.  Find the minimum number of characters that could have been changed in string c.


Input The first line of the input contains a single integer t  (1≤t≤103 ) — the number of test cases.  The first line of each test case contains one string of lowercase Latin letters a  (1≤|a|≤103 ) — the first string, where |a|  denotes the length of string a .  The second line of each test case contains one string of lowercase Latin letters b  (1≤|b|≤103 ) — the second string, where |b|  denotes the length of string b .  The third line of each test case contains one string of lowercase Latin letters c  (|c|=|a|+|b| ) — the third string.  It is guaranteed that the sum of |a|  across all test cases does not exceed 2⋅103 . Also, the sum of |b|  across all test cases does not exceed 2⋅103 .

Output For each test case, output a single integer — the minimum number of characters that could have been changed in string c .

*/