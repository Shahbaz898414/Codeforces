#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() { 
   ll n,m;
  cin >>n>>m;
    ll a[n],b[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
    if(i==0){
      b[i]=a[i];
    }else{
      b[i]=a[i]+b[i-1];
    }
  }
  while(m--){
    ll s,e;
    cin>>s>>e;
    s--;
    e--;
    ll sum=b[e] -b[s]+a[s];
    cout<<sum<<endl;
  }
  return 0;
} 


 

