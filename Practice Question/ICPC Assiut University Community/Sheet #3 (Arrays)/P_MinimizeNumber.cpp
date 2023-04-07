#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll n;
  cin >>n;
  
  int a[n];
  int r=0;
  for(int i=0;i<n;i++){
    cin>>a[i];

  }
  for(int i=0;i<n;i++){
    int sum=0;
   if(a[i]%2!=0){
     cout<<0<<  endl;
     return 0;
   }
  //  else{
     while (a[i]%2==0) {
        sum++;
        a[i]/=2;
     }
  //  }
     cout<<sum<<" ";
     if(i==0 || sum<r){
       r=sum;
     }
  }
  cout<<endl;
  cout<<r<<endl;
  return 0;
}
 

