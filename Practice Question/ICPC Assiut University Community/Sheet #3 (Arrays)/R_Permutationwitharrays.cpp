#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  
  ll n,s=0;
  cin >>n;
  ll a[n];
  ll b[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   sort(b,b+n);

   for(int i=0 ; i<n;i++){
     if(a[i]!=b[i]){
       cout<<"no"<<endl;
       return 0;
     }
     else if(a[i]==b[i]){
       s++;
     }
     
   }
   if(s==n){
     cout<<"yes"<<endl;
   }
  
    
  return 0;
}
 

