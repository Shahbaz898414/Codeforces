#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
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
const int MOD = 1 << 15;

bool isValid(string s){
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]) return false;
    }
    return true;
}
 
int32_t main(){

fast
 
 
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     freopen("error.txt","w",stderr);
// #endif

       int t, n, i, j, k, po, ne, z, sum, l, f;
    string ans;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        int a[n];
        
        for (int i = 0; i <n; i++)
        {
          
          cin>>a[i];
        }
        
    }
     


    // Time
    return 0;
}