
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

   ll t;cin>>t;
   while(t--) {
     ll n,m;cin>>n;
     vector<ll> v;
      cout<<n<<endl;
     if(n<=3)  cout<<n<<endl;
     else {
      
        while(n>0){
          v.push_back(n%9);
          cout<<n%9<<" ";
          n/=9;
        }
        cout<<endl;
        reverse(v.begin(),v.end());
        // for(auto it: v){
        //   cout<<it<<" ";
        // }

        // cout<<endl;

        for(int i=0;i<v.size();i++) {
          cout<<(char)(v[i]<4 ?(v[i]+'0'):(v[i]+'1'));
        }
        cout<<endl;
     }


    
   }

	
	return 0;
}
