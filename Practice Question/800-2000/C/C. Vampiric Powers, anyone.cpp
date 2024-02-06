#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INT_SIZE 32
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

// ll m = 998244353;

// long long erfd(long long a, long long b)
// {
//   if (b == 0)
//     return 1;
//   long long ans = erfd(a, b / 2);
//   if (b % 2)
//     return (ans % m * ans % m * a) % m;
//   else
//     return ans % m * ans % m;
// }

// A Trie Node
struct TrieNode
{
  int value; // Only used in leaf nodes
  TrieNode *arr[2];
};

// Utility function to create a Trie node
TrieNode *newNode()
{
  TrieNode *temp = new TrieNode;
  temp->value = 0;
  temp->arr[0] = temp->arr[1] = NULL;
  return temp;
}

// Inserts pre_xor to trie with given root
void insert(TrieNode *root, int pre_xor)
{
  TrieNode *temp = root;

  // Start from the msb, insert all bits of
  // pre_xor into Trie
  for (int i = INT_SIZE - 1; i >= 0; i--)
  {
    // Find current bit in given prefix
    bool val = pre_xor & (1 << i);

    // Create a new node if needed
    if (temp->arr[val] == NULL)
      temp->arr[val] = newNode();

    temp = temp->arr[val];
  }

  // Store value at leaf node
  temp->value = pre_xor;
}

// Finds the maximum XOR ending with last number in
// prefix XOR 'pre_xor' and returns the XOR of this maximum
// with pre_xor which is maximum XOR ending with last element
// of pre_xor.
int query(TrieNode *root, int pre_xor)
{
  TrieNode *temp = root;
  for (int i = INT_SIZE - 1; i >= 0; i--)
  {
    // Find current bit in given prefix
    bool val = pre_xor & (1 << i);

    // Traverse Trie, first look for a
    // prefix that has opposite bit
    if (temp->arr[1 - val] != NULL)
      temp = temp->arr[1 - val];

    // If there is no prefix with opposite
    // bit, then look for same bit.
    else if (temp->arr[val] != NULL)
      temp = temp->arr[val];
  }
  return pre_xor ^ (temp->value);
}

// Returns maximum XOR value of a subarray in arr[0..n-1]
int maxSubarrayXOR(int arr[], int n)
{
  // Create a Trie and insert 0 into it
  TrieNode *root = newNode();
  insert(root, 0);

  // Initialize answer and xor of current prefix
  int result = INT_MIN, pre_xor = 0;

  // Traverse all input array element
  for (int i = 0; i < n; i++)
  {
    // update current prefix xor and insert it into Trie
    pre_xor = pre_xor ^ arr[i];
    insert(root, pre_xor);

    // Query for current prefix xor in Trie and update
    // result if required
    result = max(result, query(root, pre_xor));
  }
  return result;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {

    ll t;
    cin >> t;

    while (t--)
    {

      ll n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
        cin >> arr[i];

      cout << maxSubarrayXOR(arr, n) << endl;
    }
  }
  return 0;
}
