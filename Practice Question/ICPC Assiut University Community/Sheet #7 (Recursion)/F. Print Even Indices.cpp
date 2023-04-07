#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(ll *a,ll n,ll h){
  if(h>=n){
    return;
  }
  printRecusion(a,n,h+2);
  cout<<a[h]<<" ";
}

int main() {

  // ll t;cin>>t;

  // while(t--){
    ll n;cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int h=0;
  
    printRecusion(a,n,h);
    // cout<<endl;
  // }

  return 0;
}