
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,c=0;cin>>n;

    if(n==1){
      cout<<"1\n";

    }else{
      for (int i = 0; i < n; i++)
      {
        
        cout<<i+2<<" ";
      }
      cout<<endl;
      
    }
  
    
  }
  
  return 0;
}