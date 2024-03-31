#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout<<endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define printv(v) for(int i=0;i<(v.size());i++){cout<<v[i]<<" ";} line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x)  int x;cin >> x;while (x--)
#define tk(x) int x;cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" ";_print(x);cerr<<endl;
#else
#define debug(x)
#endif
template <class T> void _print(T t){cerr<<t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"[\n";for(int l=0;l<v.size();l++){{for(int k=0;k<v[l].size();k++)cerr<<v[l][k]<<" ";}cerr<<"\n";}cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

const long long inf=1e18;
const int MAX = 1e6;

bool isValid(string s) {
    int len=s.size();
    for(int i=0;i<len/2;i++) {
        if(s[i]!=s[len-1-i]) return false;
    }
    return true;
}
 
bool comp(pair<int,int> &p1,pair<int,int> &p2){
  return p1.second<p2.second;
}

int32_t main() {
         fast
        int n,m; cin >> n>>m;

        int a[n][m];
        map<int,vector<pair<int,int>>> mp;

        for (int i=0; i<n;i++) {
          for (int j = 0; j<m; j++) {
            int x;cin>>x;
            mp[x].pb({i,j});
          }
        }

        int ans=0;
        for(auto it:mp) {
          // debug(it);
          vector<pair<int,int>> v=it.second;
          sort(v.begin(),v.end());
          // debug(v);
          int sum=0;
          for (int i = 0; i <v.size(); i++) {
            sum+=v[i].first;
          }

          for (int i = 0; i <v.size(); i++) {
            sum-=v[i].first;
            ans+=(sum-((v.size()-1-i)*v[i].first));
          }

          sort(v.begin(),v.end(),comp);
            // debug(v);
          sum=0;
          for (int i = 0; i <v.size(); i++) {
            sum+=v[i].second; 
          }

          for (int i = 0; i <v.size(); i++) {
           sum-=v[i].second;
           ans+=(sum-((v.size()-1-i)*v[i].second));
          }
          
        }
        cout<<ans<<endl;
    return 0;
}