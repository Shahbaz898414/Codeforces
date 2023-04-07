#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  char o;
  cin>>n>>o>>m;
  switch (o){
  case '>':
    if(n>m){
      cout<<"Right";
      
    } 
    else{
      cout<<"Wrong";
    }
    // if(m>n){
    //   cout<<"Right";
    //   if(n>m) {
    //   cout<<"Wrong";
    //  }
    // } 
    break;
    case '<':
    if(m>n){
      cout<<"Right";
       
    }
   else{
      cout<<"Wrong";
      }
    
    break;
    case '=':
    if(n==m){
      cout<<"Right";
    }
    
    else{
      cout<<"Wrong";
    }
    break;
    default:
    break;
  }
  return 0;
}



