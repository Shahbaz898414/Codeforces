#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    ll n,ans=0;
  cin>>n;
  ans+=(ll)sqrt(n);
  cout<<ans<<" fhjsjs"<<endl;
  ll temp=(ll)cbrt(n);
  ans+=temp;
  ans -=(ll)sqrt(temp);
  cout<<ans<<endl;
    
  }
  return 0;
}

// mera
// 4
// 1
// 6
// 32621
// 32620
// 23152

// output
// 4
// 1
// 6
// 32591
// 32590
// 23125
