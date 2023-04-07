#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int gcd(ll n){

  ll m,d=0;
  if(n%2==0){
    for(ll i=2;i<n;i++){
    if(n%i==0){
      m=i;
    }
    if(m>d){
      d=m;
    }
  }
  
  }else{
    for(ll i=1;i<n;i++){
    if(n%i==0){
      m=i;
    }
    if(m>d){
      d=m;
    }

  }
  }

  return d;
  
}

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        int g=gcd(n);  
        // cout<<g<<endl; 

        ll b=n-g,f,v;


        for(ll i=g;i<n;i+g){
          for(ll j=i+g;i<n;i+g){
            if(i+j==b){
              i=f;
              j=v;
            }
          }
        }

        cout<<f<<" "<<v<<" "<<g<<endl;
    }
    return 0;
}