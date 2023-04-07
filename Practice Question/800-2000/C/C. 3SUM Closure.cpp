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
        
        po=ne=z=0;
        sum=0;
        
        f=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            
            if(a[i]>0)
            po++;
            else if(a[i]<0)
            ne++;
            else
            z++;
        }
        
        if(po==1 && ne==1)
        {
            if(sum==0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }else if(po==1 && ne==0){
            cout<<"YES\n";
        }else if(ne==1 && po==0){
            cout<<"YES\n";
        }else if(po==0 && ne==0){
            cout<<"YES\n";
        }else if(z==0){
            if(po<=2 && ne<=2)
            {
                for(i=0; i<n; i++)
                {
                    for(j=i+1; j<n; j++)
                    {
                        for(k=j+1; k<n; k++)
                        {
                            f=0;
                            ans="YES";
                            for(l=0; l<n; l++)
                            {
                                if(a[i]+a[j]+a[k]==a[l])
                                {
                                    f++;
                                    break;
                                }
                            }
                            if(f==1){
                                continue;
                            }else{
                                ans="NO";
                                break;
                            }
                        }
                        if(ans=="NO")
                        break;
                    }
                    if(ans=="NO")
                    break;
                }
                cout<<ans<<"\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
     


    // Time
    return 0;
}