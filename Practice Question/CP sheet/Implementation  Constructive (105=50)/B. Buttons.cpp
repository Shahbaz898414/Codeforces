#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
int main() {
    ll n;
    cin>>n;
    ll ans=0;
    ans+=n*(n+1)/2;
    for(ll i=n-2;i>=1;i--){
        ans+=(i*(i+1)/2);
    }
    cout<<ans<<endl;
    return 0;
}


