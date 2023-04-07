#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0) {
    ll n,min=INT_MAX;cin>>n;

    ll a[n];

    for (int i = 0; i < n; i++) {
      
      cin>>a[i];
      if(a[i]<min){
        min=a[i];
      }
    }

    if(n==2){
      cout<<0<<endl;
    }else{

      cout<<min<<endl;
      
    }
    
  }

  return 0;
}