#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){
    
    ll a,b;cin>>a>>b;
    ll d=2*b;

    // cout<<a+d+1<<endl;

    if(a==0 && b==0){
      cout<<1<<endl;
      // continue;
    }else if(a>0 && b==0){
      cout<<a+1<<endl;
      // continue;
    }else if(a==0 && b>0){
      cout<<1<<endl;
      // continue;
    }else if(a>0 && b>0){
      cout<<a+d+1<<endl;
      // continue;
    }

  }

  
}