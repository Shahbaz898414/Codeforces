#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int sumition(ll x){
    int c=0;
  if(x==1){
    cout<<"NO"<<endl;
    return 0;
  }

    for (ll i = 2; i*i <=x; i++){
     if(x%i==0){
       c++;
       break;
     }
    }

    if(c>0){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
    
// hfjksl
}

int main() {

  ll t;cin>>t;
  while(t--){
    ll num;
	  cin>>num;

    // cout<<sqrt(num)<<" klm,m"<<endl;

    sumition(num);
     
  }
	
}