#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int t;
        cin>>t;
        while(t--) {
          ll n,m;cin>>n>>m;
          ll f=0;
          vector<pair<ll,ll>> v;

          for (int i = 1; i <=n; i++) {
            for (int j =1; j <=m; j++) {
               char ch;cin>>ch;
 
               if(ch=='R'){
                 v.push_back({i,j});
               }
            }
          }
          for (int i = 0; i <v.size(); i++) {
            ll x=v[i].first;
            ll y=v[i].second;
            ll count=0; 
            for (int j = 0; j <v.size(); j++) {
              if(i!=j){
                ll x1=v[j].first;
                ll y1=v[j].second;
                if(x1>=x and y1>=y){
                  count++;
                }
              }
            }
            if(count==v.size()-1){
              cout<<"YES"<<endl;
             f=1;
             break;
            }
            
          }

          if(f!=1){
            cout<<"NO"<<endl;
          }
                   
        }

    
}
