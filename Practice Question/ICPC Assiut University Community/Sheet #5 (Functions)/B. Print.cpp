#include<bits/stdc++.h>
using namespace std;

void sumition(int x){
  for(int i=1;i<=x;i++){
    if(i!=x){
       cout<<i<<" ";
    }else{
      cout<<i;
    }
   
  }
}

int main() {

  int x;cin>>x;
  sumition(x);
  return 0;
}