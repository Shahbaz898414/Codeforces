#include<bits/stdc++.h>
using namespace std;

int main() {

  int t;cin>>t;
  int tut=0,max1=0;
  int a[t],b[t];
  for (int i = 0; i <t; i++) {
    cin>>a[i];cin>>b[i];
    tut-=a[i];
    tut+=b[i];
    max1=max(tut,max1);
  }
  
  cout<<max1<<endl; 
    
    return 0;
}