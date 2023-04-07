#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(ll n){
  if(n<=0){
    // cout<<0;
    return;
  }

  
  printRecusion(n/10);
  cout<<n%10<<" ";
 
}

int main() {

  int t;cin>>t;
  while (t-->0) {
     ll n;cin>>n;
     if(n==0){
       cout<<0;
     }else{
        printRecusion(n);
     }
  
  cout<<endl;
  }
  
 


  return 0;
}