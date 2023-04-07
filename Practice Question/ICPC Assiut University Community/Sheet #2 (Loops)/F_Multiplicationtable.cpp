#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=n;i<=50;i++){
    for(int j=1;j<=12;j++){
      cout<<i<<" * "<<j<<" = "<<i*j<<endl;
    }
    break;
  }
}