#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--){
     ll n,k,ma,mi,r1,r2;
   cin>>n>>k;
   ma=max(n,k);
   mi=min(n,k);
   mi--;
    r1=mi*(mi+1)/2;
    r2=ma*(ma+1)/2;
  cout<<r2-r1<<endl;
  }
  return 0;
}
   



// int main(){

//   ll t;
//   cin>>t;
//   while(t--){
//   ll n,k;
//    cin>>n>>k; 
//    ll sum=0;
//     while(n<=k){
//       sum+=n;
//       n++;
//     }
//    cout<<sum<<endl;
//   }
//   // ssjs
   
//   return 0;
// }  
   
   