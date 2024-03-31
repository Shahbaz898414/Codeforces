#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ll t;cin>>t;
  while(t-->0) {
    ll a,b,c;cin>>a>>b>>c;

    ll x,z,y;

    ll sum=a+b+c;

    x=sum,y=x-a,z=y-b;

    cout<<x<<" "<<y<<" "<<z<<endl;
   
  }

  return 0;
}
