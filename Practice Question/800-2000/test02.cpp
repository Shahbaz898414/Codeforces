#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

  ll t;cin>>t;
  while(t--) {
     ll n,m;cin>>n;

     ll arr[n];

     ll brr[n];

     ll m1=0,m2=0;
     ll cnt=0;

     for (ll i = 0; i < n; i++)
     {
      /* code */
      cin>>arr[i];
     }
     

     for (ll i = 0; i < n; i++)
     {
      /* code */
      cin>>brr[i];
     }

      for (ll i = 0; i < n; i++)
     {
       if(arr[i]>0){
        cnt++;
        
       }else{
        m1=max(m1,cnt);
        cnt=0;
       }

     }
    m1=max(m1,cnt);

    cnt=0;


     for (ll i = 0; i < n; i++)
     {
       if(brr[i]>0){
        cnt++;
        
       }else{
        m2=max(m2,cnt);
        cnt=0;
       }
     }

     m2=max(m2,cnt);


     if(m1>m2) cout<<"Om"<<endl;
     else if(m2>m1)  cout<<"Addy"<<endl;
     else cout<<"Draw"<<endl;
     

  }

}
