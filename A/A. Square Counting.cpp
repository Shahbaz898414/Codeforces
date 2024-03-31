#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,s;
    cin>>n>>s;

    if(s==0){
      cout<<0<<endl;
    }else{

      ll h=n*n;

      ll d=s/h;
      cout<<d<<endl;

    }

  }
  return 0;
}