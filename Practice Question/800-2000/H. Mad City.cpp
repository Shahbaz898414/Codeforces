

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define eps 1e-9
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

long long fgbv(long long x, long long y, long long p)
{
  long long ret = 1;
  while (y > 0)
  {
    if (y % 2 == 1)
    {
      ret = (ret * x) % p;
    }
    y /= 2;
    x = (x * x) % p;
  }
  return ret;
}
const int kjh = 1e5 + 1;

ll Q[kjh], W[kjh];
void fact()
{

  Q[0] = W[0] = 1;

  for (int i = 1; i < kjh; i++)
  {

    Q[i] = (i * Q[i - 1]) % mod;

    W[i] = fgbv(Q[i], mod - 2, mod);
  }
}

const long long inf = 1e18;
const int MOD = 998244353;
const int MAX = 1e6;
// const ll n = 1e5 + 2;

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

const ll n = 1e5 + 2;

ll prime[n];

void prime_sieve()
{

  prime[0] = 0;
  prime[1] = 0;

  for (int i = 2; i < n; i++)
  {
    prime[i] = 1;
  }

  for (ll i = 2; i * i < n; i++)
  {
    if (prime[i] == 1)
    {
      for (int j = i * i; j < n; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}

bool dfcg(int GCD, int K)
{
  int max_prime = 1;
  for (int i = 2; i <= sqrt(GCD); i++)
  {
    while (GCD % i == 0)
    {
      GCD /= i;
      max_prime = max(max_prime, i);
    }
  }
  max_prime = max(max_prime, GCD);

  if (max_prime <= K)
    return true;
  else
    return false;
}

int conjugate(int x)
{
  int res = 0;
  bool ok = 0;
  for (int i = 30; i >= 0; i--)
  {
    if (x & (1 << i))
      ok = 1;
    else if (ok)
      res += (1 << i);
  }

  return res;
}

int msb(int x)
{
  for (int i = 30; i >= 0; i--)
  {
    if (x & (1 << i))
      return i;
  }
  return 0;
}

int power(int a, int n)
{
  int res = 1;
  while (n)
  {
    if (n & 1)
      res *= a;
    a *= a;
    n /= 2;
  }

  return res;
}

bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
  if (p1.first != p2.first)
    return p1.first > p2.first;
  return p1.second < p2.second;
}




vector<ll> graph[200005];
vector<bool> visited(200005,false);
vector<ll> parent(200005,0);
 
vector<ll> cyc(200005,0);
bool check=false;


void dfs(ll v,ll par){
    if(check) return ;

    visited[v]=true;
    for(auto u:graph[v]){
        if(check){
            return ;
        }
        if(!visited[u]){
 
            
            parent[u]=v;
            dfs(u,v);     
        }else if(u!=par){
            check=true;
            ll node=v;
 
            while(node!=u){
                cyc[node]=0;
                node=parent[node];
            }
            cyc[u]=0;
 
            return ;
 
        }
    }

    if(check) return ;
}
 
 
 
ll cnt=0;
 
ll mx=INT_MAX;
 
ll nd=-1;
 
void dfs1(ll v){
    visited[v]=true;
 
    for(auto u:graph[v]){
        if(!visited[u]){
            cnt++;
 
            if(cyc[u]==0) {
                if(mx>cnt) {
                    mx=cnt;
                    nd=u;
                }
            }
            dfs1(u);
            cnt--;
 
        }
    }
}


int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  ll t=1; 
  cin >> t;

  while (t--) {
      
        ll n,a,b;
        cin>>n>>a>>b;
        a--;
        b--;
        check=false;
 
        for(ll i=0;i<n;i++){
            graph[i].clear();
            visited[i]=false;
            cyc[i]=INT_MAX;
        }
 
 
        for(ll i=0;i<n;i++){
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
 
 
        dfs(0,-1);
 
       
        if(a==b){
            cout<<"NO"<<endl;
            continue;
        }
 
        if(cyc[b]==0){
            cout<<"YES"<<endl;
            continue;
        }
        mx=INT_MAX;
        nd=-1;
        cnt=0;
        visited.assign(n,false);
 
        dfs1(b);
 
 
 
        visited.assign(n,false);
 
 
        queue<ll> q;
        q.push(a);
        vector<ll> dis(n,-1);
        dis[a]=0;
        while(!q.empty()){
            ll node=q.front();
            q.pop();
            for(auto u:graph[node]){
                if(dis[u]==-1){
                    q.push(u);
                    dis[u]=dis[node]+1;
                }
            }
 
        }
 
 
        ll ds=dis[nd];
 
 
        if(ds>mx){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
 

  }
}
