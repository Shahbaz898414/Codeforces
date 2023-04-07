#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll a,b;cin>>a>>b;

  ll c=0,ans=0,pos=0;

  while (a!=0 || b!=0) {
    int x=a%2,y=b%2;
    int one=0;

    if(x==1) one++;
    if(y==1) one++;
    if(c==1) one++;

    c=one/2;
    if(one%2)
      ans= ans ^ (1<<pos);

      cout<<pos<<endl;

    b=b>>1,a=a>>1;
    pos++;
  }
  
  if(c==1) ans=ans^(1<<pos);

  // cout<<ans<<endl;
  return 0;
}