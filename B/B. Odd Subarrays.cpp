#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;cin>>t;
    while(t-->0) {
      ll n,cnt=0;cin>>n;
      vector<ll> v;
      for (int i = 0; i <n; i++) {
          int x;cin>>x;
          v.push_back(x);
      }

      if( n==1){
        cout<<0<<endl;
      }else{
        for (int i = 0; i < n; i++) {
          if(v[i]>v[i+1] and i+1<n){
            cnt++;
            i++;
          }
        }
        cout<<cnt<<endl;
      }

    }
  

  return 0;
}
