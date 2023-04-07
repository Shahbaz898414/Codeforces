#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  ll n,f=0;
  cin>>n;
  for(ll i=2;i*i<=n;i++){
    int c=0;
    while(n%i==0){
      c++;
      n/=i;
    }

    if(c>0 && f>0){
      cout<<"*";
    }
    if(c>0){
      cout<<"("<<i<<"^"<<c<<")";
      f=1;
    }

    if(n==1){
      break;
    }
  }
  if(n>1 && f){
    cout<<"*";
  }
  if(n>1){
    cout<<"("<<n<<"^"<<1<<")";
  }
  return 0;
}