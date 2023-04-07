#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=n;i>=1;i--){
    cout<<a[i]<<" ";
  }
   cout<<endl;
  
  return 0;
}