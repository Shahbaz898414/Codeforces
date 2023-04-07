#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int findMaxRec(ll a[], ll n) {
    
    if (n == 1)
        return a[0];
    ll ma = max(a[n-1], findMaxRec(a, n-1));
    return ma;
}


int main() {

  ll n;cin>>n;

  ll a[n];

  for (ll i =0; i < n; i++) {
    cin>>a[i];
  }

    cout<<findMaxRec(a,n);
   
    
    return 0;
}





