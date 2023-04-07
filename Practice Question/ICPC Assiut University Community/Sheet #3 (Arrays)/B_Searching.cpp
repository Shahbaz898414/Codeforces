#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,m,s=0;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
    
    // s+=m;

  }
  ll k;cin>>k;
  for(int i=0;i<n;i++){
    if(a[i]==k){
      cout<<i<<endl;
      break;
    }else{
      s++;
    }
  }
  if(s==n){
    cout<<-1<<endl;
  }

  // cout<<abs(s)<<endl;

  return 0;
}