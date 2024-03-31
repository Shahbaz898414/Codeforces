#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  ll t;cin>>t;

  while(t-->0) {

    ll l,r,a,ma=INT_MIN;
    cin>>l>>r>>a;

    if(l/a==r/a){
      cout<<r/a+r%a<<endl;
    }else{
      cout<<max(r/a+r%a,r/a-1+a-1)<<endl;
    }

  }
  return 0;
}