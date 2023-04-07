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

void frequencyCount(vector<ll> &arr, ll N, ll P)
{
  map<int, int> p;

  for (int i = 0; i < N; i++)
  {
    p[arr[i]]++;
  }

  for (int i = 0; i < N; i++)
  {
    if (p.find(i + 1) != p.end())
    {
      arr[i] = p[i + 1];
    }
    else
      arr[i] = 0;
  }
}

// void count(ll n,vector<ll> &v,ll ptr[],ll d,ll mx);

int32_t main()
{
  fast

      ll t;
  cin >> t;
  while (t--)
  {
  ll n, m;cin >> n >> m;
    ll cnt1 = n;ll cnt2 = m;
     ll ans = INT_MAX;
    n = min(cnt1, cnt2);

    //  if(n<=k){
    //     int k=pos;
    //     int l=0;
    //    for(int i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(int i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(int i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(int i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(int i=0;i<n-1;i++){
    //        for(int j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{
    m = max(cnt1, cnt2);
   ll app[n * m];





    for (int i = 0; i < n * m; i++)
      cin >> app[i];







   //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(int i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(int i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(int i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(int i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(int i=0;i<n-1;i++){
    //        for(int j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{




    sort(app, app + n * m);
   ll a = min(n, m) - 1;







 //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(int i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(int i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(int i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(int i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(int i=0;i<n-1;i++){
    //        for(int j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{




   ll xq = (a + 1) / 2;
   ll cnt = a / 2;
   
   ll f = -1;
    for (ll i = xq; i < n * m - cnt - n - m + 2; i++)
    {
     ll j = i + n + m - 2;
      if (ans > app[j] - app[i])
      {
        ans = app[j] - app[i];
        f = i;
      }
    }


   //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(ll i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(ll i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(ll i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(ll i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(ll i=0;i<n-1;i++){
    //        for(ll j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{
   ll Qarray[n][m];

    if (n <= m)
    {
     ll k = f;
     ll l = 0;
      for (ll i = 0; i < n; i++)
        Qarray[i][0] = app[k++];
      for (ll i = 1; i < m; i++)
        Qarray[n - 1][i] = app[k++];
      for (ll i = 0; i < n - 1; i = i + 2)
        Qarray[i][1] = app[l++];
      for (ll i = 1; i < n - 1; i = i + 2)
        Qarray[i][1] = app[k++];

      for (ll i = 0; i < n - 1; i++)
      {
        for (ll j = 2; j < m; j++)
        {
          if (l < f)
          {
            Qarray[i][j] = app[l++];
          }
          else
          {

            Qarray[i][j] = app[k++];
          }
        }
      }
    }
    else
    {
    }
    if (cnt1 <= cnt2)
    {

       //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(ll i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(ll i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(ll i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(ll i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(ll i=0;i<n-1;i++){
    //        for(ll j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{
      for (ll i = 0; i < n; i++)
      {
        for (ll j = 0; j < m; j++)
          cout << Qarray[i][j] << " ";
        cout << "\n";
      }

       //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(ll i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(ll i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(ll i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(ll i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(ll i=0;i<n-1;i++){
    //        for(ll j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{
    }
    else
    {
      for (ll i = 0; i < m; i++)
      {
        for (ll j = 0; j < n; j++)
          cout << Qarray[j][i] << " ";
           //  if(n<=k){
    //    ll k=pos;
    //    ll l=0;
    //    for(ll i=0;i<n;i++)mat[i][0]=b[k++];
    //    for(ll i=1;i<k;i++)mat[n-1][i]=b[k++];
    //    for(ll i=0;i<n-1;i=i+2)mat[i][1]=b[l++];
    //    for(ll i=1;i<n-1;i=i+2)mat[i][1]=b[k++];
      
    //    for(ll i=0;i<n-1;i++){
    //        for(ll j=2;j<k;j++){
    //            if(l<pos){
    //                mat[i][j]=b[l++];
    //               }
    //               else{
                     
    //                   mat[i][j]=b[k++];
                    
    //               }
    //           }
    //         }
    // }else{
        cout << "\n";
      }
    }
 
  }
  return 0;
}

// void count(ll n,vector<ll> &var,ll ptr[],ll d,ll mx){

//         for(ll i=1;i<n-1;i++){
//             if(ptr[i]>ptr[i-1] && ptr[i]>ptr[i+1] and i+1<n){
//                 var.push_back(i+1);
//             }
//         }
//         var.push_back(n);

//         for(ll i=1;i<var.size();i++){
//             d=var[i]-var[i-1]+1;
//             ll cn=0;
//             cn+=(d*(d+1))/2;
//             mx+=cn;
//         }
//         mx=mx-(var.size()-2);
//         cout<<mx;
// }