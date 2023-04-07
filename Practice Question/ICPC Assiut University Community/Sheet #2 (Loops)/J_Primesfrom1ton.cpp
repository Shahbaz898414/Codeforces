#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,i,j;
  cin>>n;

  for(i=2;i<=n;i++){
       ll c=0;
       for(j=1;j<=i;j++){
           if(i%j==0){
           c++;
           }
       }
       if(c==2){
           cout<<i<<" ";
       } 
    }   
  return 0;
}