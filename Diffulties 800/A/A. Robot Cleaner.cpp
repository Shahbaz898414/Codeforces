
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

int main() {
    fastio
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i1,j1,i2,j2,i,j;
        cin>>n>>m>>i1>>j1>>i2>>j2;
        if(i2>i1)
            i=i2-i1;
        else if(i1==i2)
            i=0;
        else
            i=2*(n-i1)+i1-i2;
        if(j2>j1)
            j=j2-j1;
        else if(j1==j2)
            j=0;
        else
            j=2*(m-j1)+j1-j2;
        cout<<min(i,j)<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}


/* if(rb>rd)rb=n+(n-rb);
            if(cb>cd)cb=m+(m-cb);
            out.println(Math.min(Math.abs(rb-rd), Math.abs(cb-cd)));*/