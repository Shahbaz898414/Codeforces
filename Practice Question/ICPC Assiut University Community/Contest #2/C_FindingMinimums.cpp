#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   ll n,k;
   cin>>n>>k; 
   ll h,c=1,min,con=0;
   for(int i=1;i<=n;i++){
     cin>>h;
     if(c){
       min=h;
       c=0;
     }else{
       if(h<min){
         min=h;
       }
     }
     con++;
     if(con==k || i==n){
       cout<<min<<" ";
       con=0;
       c=1;
     }
   }    
  return 0;
}

