#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t;cin>>t;
    while(t-->0) {
      ll n,sum=0,dum=0;cin>>n;

      vector<ll> v;

      // cout<<n%10<<endl;

      while(n>0){
        int h=n%10;

        if(h==0){
          v.push_back(0);
        }else{
           v.push_back(n%10);
        }
       
        n/=10;
      }

      // reverse(v.begin(),v.end());

      for (int i = 0; i <v.size(); i++) {
        // cout<<v[i]<<" ";
        if(i<=2){
          sum+=v[i];
        }else{
            dum+=v[i];
        }
      }
      // cout<<endl;
      if(sum==dum){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}