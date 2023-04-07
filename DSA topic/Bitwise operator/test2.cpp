#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ll n,k=0,q=0;cin>>n;

    ll a[n];
    for (int i = 0; i<n; i++) {
      cin>>a[i];
      k+=a[i];
    }

    for (int i=1; i<=n; i++) {
      q+=i;
    }
    
    
  return 0;
}