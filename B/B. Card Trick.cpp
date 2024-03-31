#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

    ll t;cin>>t;
    while(t-->0) {
      ll n,cnt=1;cin>>n;
      int sum=0;
      queue<ll> qu;
      ll a[n];
      for(int i = 0; i < n; i++) {
        cin>>a[i];
        qu.push(a[i]);
      }
      ll m;cin>>m;
      ll b[m];
      for (int i = 0; i < m; i++) {
        cin>>b[i];
      }
      for (int i = 0; i < m; i++) {
       sum+=b[i];
        if(sum>n-1){
          sum=sum-n;
        }
    }

    cout<<a[sum]<<endl;
    }
      
      
  

  return 0;
}
