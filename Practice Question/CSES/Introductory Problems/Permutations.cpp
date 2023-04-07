#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  
   ll n;cin>>n;
   vector<int> v;
   ll i=1,j=2;
   while(j<=n){
     v.push_back(j);
     j+=2;
   }
   while(i<=n){
     v.push_back(i);
     i+=2;
   }
    if(n<=3 and n!=1){
      
      cout<<"NO SOLUTION";
    }else if(n==1){
      cout<<1;
    }else{
      for (int i = 0; i <v.size(); i++) {
        /* code */
        cout<<v[i]<<" ";
      }
      
    }
    
    
  return 0;
}