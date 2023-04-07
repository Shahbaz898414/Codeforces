#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--){
     ll a,b,y,x,c=0;cin>>x>>y>>a>>b;

      if((x!=a and y!=a)and (x!=b and y!=b) ){
        c=2;
      }else if((x!=b and x!=a)){
        c++;
      }else if(y!=a and y!=b){
        c++;
      }

      cout<<c<<endl;
  }

  
 
  return 0;
}