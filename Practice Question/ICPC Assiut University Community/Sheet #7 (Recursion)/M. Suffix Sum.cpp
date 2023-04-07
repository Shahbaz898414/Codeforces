#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

  ll n,m, s=0;cin>>n>>m;

  ll a[n];
  for (ll i =0; i <n; i++) {
    cin>>a[i];
  }

  for (ll i =n-1; i >=m-1; i--) {
    s+=a[i];
  }

  cout<<s;

  // ll sum= accumulate(a,a+n,0);
  // cout<<sum;
       
    return 0;
}





