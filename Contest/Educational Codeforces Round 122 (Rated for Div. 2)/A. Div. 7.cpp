#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;

  while(t--){
    ll n;cin>>n;

    if(n%7==0){
      cout<<n<<endl;
    }else{

      int d=n/10;
      // cout<<d<<endl;
      int r=d*10;
      // cout<<r<<endl;

      for (int i = 1; i <=7; i++) {
        int f=r+i;
        if(f%7==0){
          cout<<f<<endl;
          break;
        }
      }
      
     
    }
 
  }
  
  return 0;
}