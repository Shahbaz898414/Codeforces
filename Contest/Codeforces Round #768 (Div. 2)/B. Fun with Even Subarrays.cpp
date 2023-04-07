#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
// bool areSame(int a[],int n) {
    
    
//     else
//        return false;
// }

int main() {
  int t;cin>>t;

  while(t--){
    ll n;cin>>n;
    ll a[n];
    for (ll i = 0; i <n; i++) {
      cin>>a[i];
    }

    unordered_map<ll,ll> m;
     
    for(ll i=0;i<n;i++)
       m[a[i]]++;


       if(m.size()==1)
       cout<<0<<endl;
       else if(m.size()==2){
         cout<<1<<endl;
       }else{
        ll max1=*max_element(a,a+n);
        ll min1=*min_element(a,a+n);
        cout<<abs(max1-min1-1)<<endl;
       }   
  }
  
  return 0;
}