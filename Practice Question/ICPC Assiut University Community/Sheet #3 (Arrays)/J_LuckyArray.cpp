#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
//  int t;cin>>t;
//  while(t--){
   ll n,m=100000000,b=0;
  cin>>n;
  int a[n];
  for(int i = 0;i< n; i++) {
    cin >> a[i];  
    if(a[i]<m){
      m=a[i];
    }
  }
  //  cout<<m<<endl;
  for(int i = 0;i< n; i++) { 
    if(a[i]==m){
      b++;
    }
  }
  // cout<<b<<endl;
  if(b%2!=0){
    cout<<"Lucky"<<endl;
  }else{
    cout<<"Unlucky"<<endl;
  }

//  }
  return 0;
}