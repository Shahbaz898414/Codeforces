#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll n,m;
  cin >>n>>m;
  ll a[n][m];
  for(int i=0;i<n;i++) {
   for(int j=0;j<m;j++){
     cin>>a[i][j];
   }
  }
  int x,f=0;
  cin>>x;

  // if(x==10){
  //    cout<<"will take number"<<endl;
  // }
  // else{
    for(int i=0;i<n;i++) {
   for(int j=0;j<m;j++){
    if(a[i][j]==x){ 
      f=1;
      break;
    }
   }
  }

  if(f==1){
     cout<<"will not take number"<<endl;
  }else{
    cout<<"will take number"<<endl;
  }
  // }
 

 
  return 0;
}
 

