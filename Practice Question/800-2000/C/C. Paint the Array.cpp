#include<bits/stdc++.h>
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
void _print(vector<vector<T>> v) {
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

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

int32_t main() {
    fast
    int t;
    cin >> t;
  while(t-->0) {
    int n;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++)cin>>a[i];
		long long x=0,y=0;
    // vector<int> odd,even;
		for(int i=0; i<n; i++) {
			if(i%2==0){
        x=__gcd(x,a[i]);
        // even.pb(a[i]);
      }
			else{
         y=__gcd(y,a[i]);
          // odd.pb(a[i]);
      }
		}
    // sort(odd.begin(),odd.end());
    // sort(even.begin(),even.end());
    bool ok1=1,ok2=1;

    // int d1=odd[0];
    // int d2=even[0];

    // for(int it=1;it<odd.size();it++){
    //   if(it%d1) {
    //     ok1=0;
    //     break;
    //   }
    // }

    // for(int it=1;it<even.size();it++){
    //   if(it%d2){
    //     ok2=0;
    //     break;
    //   }
    // }
    // cout<<x<<" "<<y<<endl;
		
		for(int i=0; i<n; i++) {
			if(i%2==0&&a[i]%y==0)ok1=0;
			if(i%2==1&&a[i]%x==0)ok2=0;
		}
		if(ok2)
      cout<<x<<endl;
		else if(ok1)
      cout<<y<<endl;
		else 
      cout<<0<<endl;


  }

  return 0;
}

