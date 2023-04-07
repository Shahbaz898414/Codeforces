#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n];
     for(ll i=0;i<n;i++){
       cin>>a[i];
     }
    
     sort(a,a+n);
      int t=0,r=0,c=0;
    //  reverse(a,a+n);
    for(int i=0;i<n;i++){
      if(i==0){
        t=a[i];
        r=1;
      }
      else{
        if(t==a[i]){
          r++;
        }else if(t+1==a[i]){
          c+=r;
          t=a[i];
          r=1;
        }else{
          r=1;
          t=a[i];
        }
      }
    }
    cout<<c<<endl;
    
     
  return 0;
}

// 4 0 1 2 0 5 6 