#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,m,s=0;
  cin>>n;
  // int a[n];

  for(int i=0;i<n;i++){
    cin>>m;
    s+=m;

  }
  cout<<abs(s)<<endl;

  return 0;
}