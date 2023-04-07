#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll size;
  cin>>size;
  int r=0;
  
  for(int i=1;i<=size;i++){
    int c=0;
    ll num;
    cin>>num;
    if(num%2!=0){
      c=0;
    }else{
      while(num>0){
         if(num%2!=0){
           break;
         }else{
           c++;
           num/=2; 
         }
       }
    }
    if(c>r){
      r=c;
    }
  }
  cout<<r<<endl;
  return 0;
}
 
 