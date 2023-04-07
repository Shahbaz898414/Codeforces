#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;
 
int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  

 ll n;cin>>n;
  ll a[n];
  ll mini=INT_MAX;
 
  for (ll i=0; i<n; i++) {
    cin>>a[i];
  }
  ll sum=0;
  sum=accumulate(a,a+n,sum);
  
  for (ll i = 0; i <(1<<n);i++) {
    ll s=0;
    for (ll j=0; j<n; j++) {
      if(i&(1<<j)){
        // cout<<i<<endl;
        s+=a[j];
      }
      
    }
    ll diff=abs((sum-s)-s);
    mini=min(mini,diff);
  }
 
  cout<<mini<<endl;
  return 0;
}

/*
  


*/

// 