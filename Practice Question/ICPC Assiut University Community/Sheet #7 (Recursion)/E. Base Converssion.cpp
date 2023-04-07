#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(ll n){
  if(n==0){
    return;
  }

  printRecusion(n/2);

  cout<<n%2;
  
}

int main() {

  ll t;cin>>t;

  while(t--){
    ll n;cin>>n;
  
  printRecusion(n);
  cout<<endl;
  }

  return 0;
}