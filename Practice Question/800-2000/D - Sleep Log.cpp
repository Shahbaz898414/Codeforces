#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(m) for(int i=0; i<m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nl '\n'
#define nll cout<<'\n'
#define mod 1000000007
#define inf (1LL<<61)
#define inff (1<<30)
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mxn changeit

#define ts to_string 
string ts(char c) { return string(1, c); } string ts(bool b) { return b ? "true" : "false"; } string ts(const char* s) { return (string)s; } string ts(string s) { return s; }template<class A> string ts(complex<A> c) { stringstream ss; ss << c; return ss.str(); } string ts(vector<bool> v) {  string res = "{"; for(int i = 0; i < v.size(); ++i) res += char('0' + v[i]); res += "}"; return res; }template<size_t SZ> string ts(bitset<SZ> b) { string res = ""; for(int i = 0; i < SZ; ++i) res += char('0' + b[i]); return res; }template<class A, class B> string ts(pair<A,B> p);template<class T> string ts(T v) { bool fst = 1; string res = "{"; for (const auto& x: v) { if (!fst) res += ", "; fst = 0; res += ts(x); } res += "}"; return res;}template<class A, class B> string ts(pair<A,B> p) { return "(" + ts(p.first) + ", " + ts(p.second) + ")"; } void DBG() { cerr << "]" << endl; }template<class H, class... T> void DBG(H h, T... t) { cerr << ts(h); if (sizeof...(t)) cerr << ", "; DBG(t...); } void EDBG(string names) { names = names; }template<class H, class... T> void EDBG(string names, H h, T... t) { auto pos = names.find(','); auto first_name = names.substr(0, pos); auto rest = names.substr(pos + 1); while(rest.front() == ' '){ rest = rest.substr(1); } cerr << "   [" << first_name << "]: [" << ts(h) << "]" << endl; EDBG(rest, t...); }

#ifndef dbghere 
#define dbg(...) cerr<<"(Line "<<__LINE__<<")"<<endl, EDBG(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...) 0
#endif

int main()
{
    fastio;
    ll n;
    cin>>n;
    ll arr[n];
    vector<ll>arr2,ghum,uthse;
    fr(n) cin>>arr[i];
    for(int j=0, i=2  ; i<n; i+=2, j++){
        arr2.pb(arr[i]-arr[i-1]);
        ghum.pb(arr[i-1]);
        uthse.pb(arr[i]);
    }
    ll m=arr2.size(), pref[m+1]={};
    fr(m) pref[i+1]=pref[i]+arr2[i];

    for(auto it:arr2){
      cout<<it<<" ";
    }

    cout<<endl;

    for(auto it:ghum){
      cout<<it<<" ";
    }

    cout<<endl;


     for(auto it:uthse){
      cout<<it<<" ";
    }

    cout<<endl;


    // int q;
    // cin>>q;   
    // while(q--){
    //     ll l, r;
    //     cin>>l>>r;
    //     ll in1=lower_bound(all(ghum),l)-ghum.begin();
    //     ll in2=upper_bound(all(uthse),r)-uthse.begin();
    //     ll sum=pref[in2]-pref[in1];
    //     ll in3=in1*2+1;
    //     if(in3>1){
    //         if(arr[in3-1]>l){
    //             sum+=max(arr[in3-1]-max(l,arr[in3-2]),0ll);
    //         }
    //     }
    //     ll in4=in2*2+1;
    //     if(in4<n){
    //         if(arr[in4]<=r){
    //             sum+=max(min(r,arr[in4+1]-1)-arr[in4],0ll);
    //         }
    //     }
    //     cout<<sum<<nl;
    // }



    return 0;
}