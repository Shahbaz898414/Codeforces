

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

    ll n,k;cin>>n>>k;

    int p=0;

    for(int i=0;i<n;i++) {

      int q=p^i;

      cout<<q<<endl;

      p=p^q;

      int v;cin>>v;

      if(v==1){

        break;

      }

    }



  }

  return 0;
}




/*


Today was my 1st day out of the 100 days of CF hard challenge.

So today, I solved 5 problems of 1700 on CF.

1.RPD and Rap Sheet (Easy Version) (https://lnkd.in/ga75rU43):
in this problem what I can think of is
i can do n operations
and after each incorrect guess, the password changes to z = x^y
where z is the new password and x was the old, and y was the guessed
so what we can do is
we can iterate on the numbers from 0...n-1
and then check if the ith number is x or not; if it is, then 1 will be returned, otherwise 0
now in the next iteration x will become new_x = x^i, and to remove this i, we can xor new_x with i^(i+1); this will erase the previous i
this problem took me around 30 - 35 mins to solve


2. Array Destruction (https://lnkd.in/g6ZKRjKy):
the 1st observation is
if I don't take the max number in the 1st operation
then I won't be able to remove it because the sum in the next operation would be < max number
so I have to take the max number 1st for the 2nd I can just brute force and check
now the only problem remaining is how to check that after taking a[n] and a[i] as the starting elements, how to check if we will be able to erase all numbers
we can do it using the use of a multiset
this problem took me around 20 - 25 mins to solve


3. E. Singers' Tour (https://lnkd.in/g5KhJxG3):
1st observation
the contribution of all the elements of array a in the sum of array b would be n*(n+1)/2 times, as each element is occurring 1, 2, 3..n times, so the sum would be n*(n+1)/2
so the total sum of array b would be n*(n+1)/2 * (sum of array a)
so if the sum of b % (n*(n+1)/2) != 0, then the answer is NO
now we have to find the array elements
for that
let's take an example n=3
elements of array b
b[0] = a[0] + 3a[1] + 2a[2],
b[1] = a[1] + 2a[0] + 3a[2],
b[2] = a[3] + 3a[0] + 2a[1]
b[1] - b[0] - (a[0] + a[1] + a[2]) = -3a[1]
so a[i] = (-1*(b[i]-b[i-1]-(sum a)))/n
this problem took me around 15-20 mins to solve

4. C. Hidden Permutations (https://lnkd.in/gkAni34i):
So this problem was just to find the cycles
and then print them
we can use DFS for that
and at most 2n queries will be used
as at most n cycles can be there, and for each cycle of length l, l+1 queries are used
so at most n+n queries will be used
this problem took me around 30-35 mins to solve
this was a nice problem for learning cycles in a graph

B. Hills And Valleys (https://lnkd.in/gnczyhjZ):
in this problem, the observation is
if we change a[i] to either make it a[i-1] or a[i+1]
if we make a[i] = a[i-1]
then
if there was a hill or valley from i-2, i-1, i, then this will be removed
if there was a hill or valley from i-1, i, i+1, then this will be removed
similarly for the case a[i] = a[i+1];

this was an easy problem, I would say it took me around 15 minutes to solve




*/