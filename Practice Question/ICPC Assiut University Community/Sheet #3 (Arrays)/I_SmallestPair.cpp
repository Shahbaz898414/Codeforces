#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
 int t;cin>>t;
 while(t--){
   ll n,m=100000000,b,c;
  cin>>n;
  int a[n];
  for(int i = 0;i< n; i++) {
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i]!=a[j]){
        if(a[i]+a[j]<m){
          m=a[i]+a[j];
          // b+=m+j-i;
          c=i;b=j;
        }
      }
      
    }
  }
  ll k=m+b-c;
  cout<<k<<endl;
 }
  return 0;
}