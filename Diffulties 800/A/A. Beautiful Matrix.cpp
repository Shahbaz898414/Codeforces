#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=0,b=0;
    for(int i=1;i<=5;i++) {
     for(int j=1;j<=5;j++) {
      int t;     
      cin>>t;
      if(t==1) {
          a=i;
          b=j;
      }
     }
    }
    
    int ans=abs(a-3)+abs(b-3);
    cout<<ans;
}