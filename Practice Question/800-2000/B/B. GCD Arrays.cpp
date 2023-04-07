#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {

   ll l,r,k,odd;cin>>l>>r>>k;

   if(l==r && l==1){
     cout<<"NO"<<endl;
   }else if(l==r){
     cout<<"YES"<<endl;
   }else{
        if((r-l+1)%2==0) {
          odd=(r-l+1)/2;
        }else if(l%2==0){
          odd=(r-l+1)/2;
        }else{
          odd=(r-l+1)/2 +1;
        }

        if(odd<=k){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
   }
   
   

   
  }
  return 0;
}
 
 