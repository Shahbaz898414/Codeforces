#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    char e,o;
    cin>>a>>o>>b>>e>>c;
    switch (o){
 case '+':
  if((a + b==c)){
    cout<<"Yes";
  }
  else{
    cout<<a+b;
  }
 break;
 case '-':
 if((a - b==c)){
    cout<<"Yes";
  }
  else{
    cout<<a-b;
  }
 
 break;
 case '*':
 if((a*b==c)){
    cout<<"Yes";
  }
  else{
    cout<<a*b;
  }
 
 break;
 
 default:
 cout<<"Operat  not found!"<<endl;
 break;
 }
  return 0;
}