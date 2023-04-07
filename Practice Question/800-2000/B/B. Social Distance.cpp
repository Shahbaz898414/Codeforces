#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, i, j, f;
    
    cin>>t;
    
    for(;t--;) {
        cin>>n>>m;
        f=0;
        
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        reverse(a, a+n);
        
        m=m-1-2*a[0];
        
        if(m<0){
            cout<<"NO\n";
            continue;
        }
        
        for(i=1; i<n; i++){
            if(i==n-1)
            m=m-1;
            else
            m=m-1-a[i];
            
            if(m<0){
                f=1;
                break;
            }
        }
        
        if(f==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}