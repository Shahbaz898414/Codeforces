#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,m;
  cin>>n>>m;
  ll c=0;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(m-i-j>=0 and m-i-j<=n){
        c++;
      }
    }
  }
  cout<<c<<endl;
  return  0;
}


