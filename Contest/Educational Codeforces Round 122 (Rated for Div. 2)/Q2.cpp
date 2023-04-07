#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;

  while(t--){
    string s;cin>>s;
     ll ans=0,r=0,e=0;
     ll n=s.length();

     for (int i = 0; i < n; i++) {
       if(s[i]=='1'){
         e++;
       }else{
         r++;
       }
        if(e!=r){
         ans=min(e,r);
        }
     }

     

     cout<<ans<<endl;
     
  }
  
  return 0;
}