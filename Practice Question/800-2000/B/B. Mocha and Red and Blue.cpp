#include<bits/stdc++.h>
#define ll long long int
using namespace std;



bool isPrime(int n){
  if(n<=1)
   return false;
  
  if(n<=3)
    return true;
  if(n%2==0||n%3==0)
  return false;
  for(int i=5;i*i<=n;i=i+6)
    if(n%i==0||n%(i+2)==0)
    return false;
  return true;
}

int main() {

  ll t;cin>>t;
  while(t-->0){
     ll n,con=0;
     cin>>n;
     string s;cin>>s;
    
  }
 
  return 0;
}