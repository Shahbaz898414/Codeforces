#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=200010;
long long a[M];
 
int main() {
  ll t;cin>>t;

  while(t--){

    ll n;cin>>n;

    ll a[n];

    for (int i =0;i<n;i++) {
      cin>>a[i];
    }

    sort(a,a+n);

    ll as=a[0];

    // for(int i=1;i<n;i++){
    //   cout<<a[i]-a[i-1]<<" ";
    // }
    // cout<<endl;

    for(int i=1;i<n;i++){
      as=max(as,a[i]-a[i-1]);
    }
    

    cout<<as<<endl;
  }
}