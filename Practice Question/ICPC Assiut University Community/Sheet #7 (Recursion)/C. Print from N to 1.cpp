#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printRecusion(int n,int m){
  if(n<=0){
    return;
  }

  // else{

    if(n==1){
      cout<<n;
      printRecusion(n-1,m);
    }else{
      cout<<n<<" ";
       printRecusion(n-1,m);
    }
    

       
      
  
    
 
  // }

 
 
 
}

int main() {
  int n;cin>>n;
  int m=n;  // int i=1;
  printRecusion(n,m);


  return 0;
}