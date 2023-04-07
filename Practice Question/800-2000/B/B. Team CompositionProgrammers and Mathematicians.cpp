#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t-->0){

      ll x,y,a,b;

     cin>>a>>b;
        ll ans=0;
        
        if(a<b){
            swap(a, b);
        }
            
        ans=ans+min((a-b)/2, b);
        b=b-ans;
        ans=ans+b/2;
        
        
        cout<<ans<<"\n";
    }
      
    

    return 0;
}


