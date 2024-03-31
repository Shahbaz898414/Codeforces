#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;
  while(t-->0){
     ll l,r;cin>>l>>r;

    if (r < l * 2) {
        cout << r - l << endl;
    }
    else {
        cout << (r - 1) / 2 << endl;
    }
     
        
  }
 
  return 0;
}