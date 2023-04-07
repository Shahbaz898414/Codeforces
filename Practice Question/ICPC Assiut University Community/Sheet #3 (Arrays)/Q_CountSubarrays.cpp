#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {  
  ll t;
  cin>>t;
  while(t--){
    ll n,r;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    r=n;
    int i=0;
    int z=0;
    while(true){
      if(z==n-1){
        break;
      }
      if(a[i]>a[i+1]){
        z++;
        i=z;
        continue;
      }
      r++;
      i++;
      if(i==n-1){
        z++;
        i=z;
      }
    }
    cout<<r<<endl;
  }
  return 0;
}
 

