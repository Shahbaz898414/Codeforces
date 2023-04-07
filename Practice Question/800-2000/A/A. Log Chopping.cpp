#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

  ll t;cin>>t;

  while(t-->0) {
    ll n;cin>>n;

    ll a[n],sum=0;
    bool fl1=true,fl2=true;

    for (int i=0; i<n; i++) {
      cin>>a[i];
      if(a[i]==1){
        continue;
      }else{
        sum+=a[i]-1;
      }
    }

    if(sum%2==0){
      cout<<"maomao90"<<endl;
    }else{
      cout<<"errorgorn"<<endl;
    }
    
  }

  return 0;
}
