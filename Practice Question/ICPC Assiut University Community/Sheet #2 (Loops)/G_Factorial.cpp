#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n){
  if(n==0){
    return 1;
  }
  ll s=f(n-1);
  return n*s;
}


int main(){


  ll t;
  cin>>t;
  while(t--){
     ll n;
     cin>>n;
     cout<<f(n)<<endl;
  }
 
  return 0;
}