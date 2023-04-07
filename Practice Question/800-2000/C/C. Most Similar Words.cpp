#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t;cin>>t;
    while(t-->0) {
      ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        ll temp_mini=INT_MAX;
        for(ll j=i+1;j<n;j++){
            ll sum=0;
            for(ll k=0;k<v[i].size();k++){
                ll temp1=max(v[i][k],v[j][k])-min(v[i][k],v[j][k]);
                sum+=temp1;
            }
            temp_mini=min(temp_mini,sum);
        }
        mini=min(mini,temp_mini);
    }
    cout<<mini<<endl;
         
    }
    
    return 0;
}