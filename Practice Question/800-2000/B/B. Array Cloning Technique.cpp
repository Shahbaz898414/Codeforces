#include <bits/stdc++.h>
#define ll long long int

using namespace std;
 
int main() {

    ll t;cin>>t;

    while(t-->0) {

      ll n;cin>>n;
      ll a[n];

      ll maxa=INT_MIN;
      map<ll,ll> ma;

      for (int i = 0; i < n; i++) {
        cin>>a[i];
        ma[a[i]]++;
        maxa=max(maxa,ma[a[i]]);
      }

      if(maxa==n){
        cout<<0<<endl;
      }else{
        ll cnt=1;

        while(maxa<=n) {

          if(maxa+maxa>=n) {
            cnt+=(n-maxa);
            break;
          }
          cnt+=maxa;
          maxa=maxa*2;
          cnt++;
        }

        cout<<cnt<<endl;
      }


      
    
    }
    
 
    return 0;
}