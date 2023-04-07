#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll t;cin>>t;

  while(t-->0){

   ll n,c=0;cin>>n;

   string s;cin>>s;
   bool fl=true;

   for (int i = 0; i < n; i++) {
     while(i<n and s[i]=='W') {
       i++;
     }

     if(i==n){
       break;
     }

     int blue=0,red=0;
     while(i<n and s[i]!='W'){
       if(s[i]=='R'){
         red++;
       }else{
         blue++;
       }
       i++;
     }

     if(red==0 || blue==0) {
       fl=false;
       break;
     }
   }

   if(fl){
     cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
   
  }

  return 0;
}

