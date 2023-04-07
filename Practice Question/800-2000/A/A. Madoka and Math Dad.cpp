#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
 
int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {

   ll n,sum=0,c=0;cin>>n;

   if(n < 3)
        cout << n << "\n";
    else if(n % 3 == 0) {
        for (int i = 0; i < n / 3; i ++)
            cout << 21;
        cout << "\n";
    }
    else if(n % 3 == 2) {
        for (int i = 0; i < n / 3; i ++)
            cout << 21;
        cout << 2 << "\n";
    }
    else if(n % 3 == 1) {
        cout << 1;
        for (int i = 0; i < n / 3; i ++)
            cout << 21;
        cout << "\n";
    }
   
   }

  


   
  
  return 0;
}
 