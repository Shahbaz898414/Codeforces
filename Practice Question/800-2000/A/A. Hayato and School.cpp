// C++ program which returns the Number of sub sequences
// (or subsets) which are divisible by m.
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

   ll t;cin>>t;
   while(t--) {
     ll n,m;cin>>n;

     vector<ll> v(n),odd,even;
     for (int i = 0; i <n; i++) { 
      cin>>v[i];
     }

     for (int i = 0; i <n; i++) {
      if(v[i]%2==0) even.push_back(i+1);
      else odd.push_back(i+1);
     }

    //  cout<<odd.size()<<" "<<even.size()<<endl;

     if(odd.size()==0) {
      cout<<"NO"<<endl;
     }else if(odd.size()==2 and even.size()==1) {
      cout<<"NO"<<endl;
     }
    //  else if(odd.size()==2 and even.size()==1){

    //  }
     
     else {
      if(odd.size()>=3){
        cout<<"YES"<<endl;
        for(int i=0;i<3;i++) {
          cout<<odd[i]<<" ";
        }
      }else{
        cout<<"YES"<<endl;
        for (int i = 0; i < 2; i++) {
          cout<<even[i]<<" ";
        }

        cout<<odd[0]<<" ";
      }
      cout<<endl;
     }
     
     

	
	
   }

	
	return 0;
}
