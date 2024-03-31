#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t;cin>>t;
    while(t-->0) {
      ll n,sum=0;cin>>n;

      ll a[n],b[n];

      set<ll>s1;

      map<ll,ll> ma;

      for (int i = 0; i < n; i++) {
        cin>>a[i];
      }

      ll maxa=*max_element(a,a+n);
      ll mina=*min_element(a,a+n);

      for (int i = 0; i < n; i++) {
        if(a[i]!=mina){
          sum+=a[i]-mina;
        }
      }

      cout<<sum<<endl;
      
     

    }
    return 0;
}