#include <bits/stdc++.h>
#define ll long long int

using namespace std;
 
int main() {

    ll t;cin>>t;

    while(t-->0) {
      ll n;
      cin>>n;

      ll a[n];

      ll zero=0;

      set<ll> s1;

      for (int i = 0; i < n; i++) {

        cin>>a[i];

        if(a[i]==0){
          zero++;
        }

        s1.insert(a[i]);
      }

      if(zero>0){

        cout<<n-zero<<endl;

      }else{
        if(s1.size()==n){
          cout<<n+1<<endl;
        }
        else{
          cout<<n<<endl;
        }
      }
      


      
    }
    
 
    return 0;
}