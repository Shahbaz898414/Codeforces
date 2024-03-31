#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll n,c=0;cin>>n;
  // ll a[]={1,5,10,20,100};

  while(n>0){
    if(n>=100){
      n=n-100;
      c++;
    }else if(n>=20){
      n=n-20;
      c++;
    }else if(n>=10){
      n=n-10;
      c++;
    }else if(n>=5){
      n=n-5;
      c++;
    }else{
      n=n-1;
      c++;
    }

  }

  cout<<c<<endl;

  return 0;
}