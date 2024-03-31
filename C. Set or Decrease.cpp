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
    ll n,k;cin>>n>>k;

    vector<ll>  arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    ll s = 0;

    for (ll i = 0; i < n; i++)
    {
      /* code */
      s+=arr[i];
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<s<<" ";
    ll ans = max(s - k,0ll);

    s=s-arr[0];

    cout<<s<<" "<<ans<<endl;

    
    ll x;
    ll c = 1;

    for(int i = n-1;i>0;i--){

      s -= arr[i];
      c++;
      x = (c*arr[0] + s - k)/c + int( (c*arr[0] + s - k)%c > 0);

      if(i==n-2){
        cout<<"started"<<endl;
        cout<< ((c*arr[0] + s - k)/c) <<" "<<int( (c*arr[0] + s - k)%c > 0)<<endl;

         cout<<x<<" ";
      }
     
      x = max(x,0ll);
      ans = min(ans, x + c-1);
	  }
 
  cout<<endl;
	cout<<ans<<"\n";
    
  }
}



/*

7 8
1 2 1 3 1 2 1




𝐓𝐨𝐝𝐚𝐲 𝐰𝐚𝐬 𝐦𝐲 𝟕𝟒𝐬𝐭 𝐝𝐚𝐲 𝐨𝐮𝐭 𝐨𝐟 𝐭𝐡𝐞 𝟕𝟓 𝐝𝐚𝐲𝐬 𝐨𝐟 𝐡𝐚𝐫𝐝 𝐜𝐡𝐚𝐥𝐥𝐞𝐧𝐠𝐞𝐬. 𝐒𝐨 𝐭𝐨𝐝𝐚𝐲. 𝐈 𝐬𝐨𝐥𝐯𝐞𝐝 𝟓 𝐪𝐮𝐞𝐬𝐭𝐢𝐨𝐧𝐬.

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟏 : 𝟐𝟗𝟔𝟐. 𝐂𝐨𝐮𝐧𝐭 𝐒𝐮𝐛𝐚𝐫𝐫𝐚𝐲𝐬 𝐖𝐡𝐞𝐫𝐞 𝐌𝐚𝐱 𝐄𝐥𝐞𝐦𝐞𝐧𝐭 𝐀𝐩𝐩𝐞𝐚𝐫𝐬 𝐚𝐭 𝐋𝐞𝐚𝐬𝐭 𝐊 𝐓𝐢𝐦𝐞𝐬
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dwEPaurp]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟐 : 𝐂. 𝐒𝐞𝐭 𝐨𝐫 𝐃𝐞𝐜𝐫𝐞𝐚𝐬𝐞
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dM4hcmWR]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟑 : 𝐁. 𝐊𝐚𝐫𝐞𝐧 𝐚𝐧𝐝 𝐂𝐨𝐟𝐟𝐞𝐞
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dQ7S4zpj]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟒 : 𝐀. 𝐆𝐫𝐞𝐠 𝐚𝐧𝐝 𝐀𝐫𝐫𝐚𝐲
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/d98eExf4]


𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝟓 : 𝐂. 𝐒𝐭𝐫𝐢𝐧𝐠 𝐓𝐫𝐚𝐧𝐬𝐟𝐨𝐫𝐦𝐚𝐭𝐢𝐨𝐧
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤 🔗: [https://lnkd.in/dHdYWniQ]


#75dayschallenge
#challenge
#consistency
#Cp 
#AlgorithmExplained 
#ProblemSolving
#lessons
#learning




*/