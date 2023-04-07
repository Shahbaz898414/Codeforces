#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll t;cin>>t;

  while(t-->0){

   ll n,c=0;cin>>n;

   bool flag=true,fl=true;

   vector<int> odd,even;
   for (int i=0;i<n;i++) {
  
    int x;cin>>x;

     if(i%2==0){
       even.push_back(x);
     }else{
       odd.push_back(x);
     }
   }
   for (int i = 1; i < even.size(); i++) {
     if(even[i]%2!=even[i-1]%2) {
       flag=false;
       break;
     }
   }

   for (int i = 1; i <odd.size(); i++) {
     if(odd[i]%2!=odd[i-1]%2){
       fl=false;
       break;
     }
   }

   if(flag && fl){
     cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
   
  }

  return 0;
}