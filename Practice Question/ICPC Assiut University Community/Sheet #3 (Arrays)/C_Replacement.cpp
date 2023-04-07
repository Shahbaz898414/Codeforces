#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>0){
      cout<<1<<" ";
    }else if(a[i]<0){
      cout<<2<<" ";
    }else{
      cout<<0<<" ";
    }
  }
  

  return 0;
}