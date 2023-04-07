#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
     for(ll i=0;i<n;i++){
       cin>>a[i];
     }
     sort(a,a+n);
     reverse(a,a+n);
     ll sum=0;
     for(ll i=0;i<m;i++){
       if(a[i]<0){
         break;
       }
     
       sum+=a[i];
     }
      cout<<sum<<endl;
      
  return 0;
}

// 4 0 1 2 0 5 6 