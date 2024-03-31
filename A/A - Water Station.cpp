
#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {

  //  ll t;cin>>t;
  //  while(t--) {
     ll n,m,k;cin>>n;


    ll f=n%5;

    ll s=n+(5-f);

    // cout<<s<<" "<<n-f<<endl;

    if(5-f<=f){
      cout<<s<<endl;
    }else {
      cout<<n-f<<endl;
    }
    // cout<<min(n+(5-f),n-f)<<endl;
     
    
    
  //  }

	
	return 0;
}
