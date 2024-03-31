#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,x,d,c=0,one=0,zero=0;
    cin>>n;

    ll a[n],b[n];

    for (int i = 0; i < n; i++){
      cin>>a[i];
    }

    for (int j = 0; j < n; j++) {
      
      cin>>b[j];
    }

    for (int i = 0; i < n; i++) {
      if(a[i]>b[i]){
        swap(a[i],b[i]);
      }
    }

    for (int i = 0; i <n-1; i++)
    {
      one+=abs(a[i]-a[i+1]);
      zero+=abs(b[i]-b[i+1]);

    }

    cout<<one+zero<<endl;
    
  }

  return 0;
}