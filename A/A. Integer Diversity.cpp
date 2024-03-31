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

      ll n,c=0,zero=0;cin>>n;

      ll a[n];
     

      map<ll,ll> ma;

      for (int i = 0; i <n;i++) {
        cin>>a[i];
        if(a[i]>=0){
           ma[a[i]]++;
        }else{
          a[i]*=-1;
          ma[a[i]]++;
        }
       
      }

      for(auto &it:ma){
        if(it.first==0){
          c++;
        }else{
          if(it.second==1){
            c++;
          }else if(it.second>1){
            c+=2;
          }
        }
      } 

      cout<<c<<endl; 

    }

    return 0;
    
}


