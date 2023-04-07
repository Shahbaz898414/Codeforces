#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  string ca;
  ostringstream v;
	cin>>ca;

  string g=v.str();

  ll res=1,n=0;
  for (ll i = ca.size()-1; i >=0; i--) {
    n +=(ca[i]-'0')+9999;
    cout<<n<<endl;

      // g=;
    
  }

  // cout<<v<<endl;
  // cout<<n<<endl;
  
  
    return 0;
}