#include <bits/stdc++.h>
#define ll long long int

using namespace std;


 
int main() {

    ll t;cin>>t;
    while(t-->0) {
     ll n,cnt=0;cin>>n;
     ll a[n];
     for (int i = 0; i < n; i++) {
       cin>>a[i];

     }

     if(n==1){
       cout<<0<<endl;
       continue;
     }
      int ans=0;
      bool final=false;
     while(1){
        int i=1;
        bool flag=true;
        while(i<n){
         if(a[i-1]==0 and a[i]==0){
           final=true;
           break;
         }
         if(a[i-1]>=a[i]){
           ans++;
           a[i-1]/=2;
            flag=false;
            break;
         }
         i++;
       }
       if(flag){
         break;
       }
     }
     if(!final){
       cout<<ans<<endl;
     }else{
       cout<<-1<<endl;
     }
     
    }
    
 
    return 0;
}