#include<iostream>
using namespace std;

int main(){
   long int n,m,p;
  cin>>n>>m>>p;

  if(n<=m and n<=p){
    cout<<n;
  }
  else if(m<=n and m<=p){
    cout<<m;
  }
  else{
    cout<<p;
  }
  cout<<" ";
  if(n>=m and n>=p){
    cout<<n;
  }
  else if(m>=n and m>=p){
    cout<<m;
  }
  else{
    cout<<p;
  }


  
 
  return 0;
}

