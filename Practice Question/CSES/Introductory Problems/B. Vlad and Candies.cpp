#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){

    ll n;cin>>n;

    ll a[n];
    for (int i = 0; i < n; i++) {
      
      cin>>a[i];
    }

    if(n==1){
      if(a[0]==1){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
      continue;
    }

    sort(a,a+n,greater<int>());
    // for (int i = 0; i < n; i++) {
      
    //   cout<<a[i]<<" ";
    // }
    // cout<<endl;

    if(a[0]-a[1]<=1) {
      cout<<"YES"<<endl;
    }else {
      cout<<"NO"<<endl;
    }
    
    
   
    
  }

 return 0;
  
}