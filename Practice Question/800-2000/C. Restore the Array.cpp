
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

   ll t;cin>>t;
   while(t--) {
     ll n,m,k;cin>>n;
     vector<ll> v(n),arr;

     for(int i=0;i<n;i++) {
      cin>>v[i];
     }


     for(int i=0;i<n-1;i++) {
      if(v[i]<v[i+1]){
        arr.push_back(v[i]);
        arr.push_back(0);
      }else if(v[i+1]<v[i]){
        arr.push_back(0);
      }
      else {
        arr.push_back(v[i]);
      }
     }

     for(auto it:arr) {
      cout<<it<<" ";
     }

     cout<<endl;
    
    


    
   }

	
	return 0;
}
