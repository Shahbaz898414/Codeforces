#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  int a[n];
  int m=1000000,b;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]<m){
      m=a[i];
      // b++;
      // cout<<a[i];
    } 
  }
  for(int i=0;i<n;i++){
    if(a[i]==m){
      b=i;
      break;
    }
  }
  cout<<m<<" "<<b;
  

  return 0;
}