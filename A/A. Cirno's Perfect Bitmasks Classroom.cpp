#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t;cin>>t;
    while(t-->0) {
    ll n;cin>>n;
    vector<ll> v;
     ll pos=0,x=n;

     while(x){
       if(x&1){
         v.push_back(pos);
       }
       x>>=1;
       pos++;
     }

     if(v[0]==0){
       if(n==1){
         cout<<3<<endl;
       }else{
         cout<<1<<endl;
       }
     }else{
       ll x2=pow(2,v[0]);
       if(v.size()>1){
         cout<<x2<<endl;
       }else{
         cout<<x2+1<<endl;       
       }
     }
    }
    
 
    return 0;
}