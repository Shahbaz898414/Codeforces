#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, k, l, r, si;
    
    cin>>t;
    
    for(;t--;) {
        cin>>n;
        
        ll a[n];
        
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        
        if(a[0]!=n && a[n-1]!=n) {
            
            cout<<"-1\n";
            
        }else{
            reverse(a, a+n);
            
            for(i=0; i<n; i++) {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
}