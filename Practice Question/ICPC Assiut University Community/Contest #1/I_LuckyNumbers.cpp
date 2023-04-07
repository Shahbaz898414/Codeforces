#include<bits/stdc++.h>
using namespace std;
int main(){

  int a;
  cin>>a;
  int x=a/10;
  int  z=a%10;

  if(z%x==0){
    cout<<"YES"<<endl;
  }else if(x%z==0){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  
  return 0;
}

