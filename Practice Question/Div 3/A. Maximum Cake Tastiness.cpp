#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ll long long int

int  main() {

  ll t;cin>>t;

  while(t--){
    ll n;cin>>n;
    ll a[n];

    for (int i = 0; i <n; i++) {
      cin>>a[i];
    
    }

    sort(a,a+n);

    cout<<a[n-1]+a[n-2]<<endl;
    
    
  }

  

return 0;
}