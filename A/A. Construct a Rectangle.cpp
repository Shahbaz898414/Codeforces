#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;cin>>t;
  while(t--) {

    ll a[3],max=INT_MIN,min=INT_MAX,even=0,odd=0,common=0;

  

    for (int i = 0; i < 3; i++) {
      cin>>a[i];
    }
    
    sort(a,a+3);


    if(a[0]+a[1]==a[2]){
      cout<<"YES"<<endl;
    }else if(a[0]==a[1] and a[2]%2==0){
      cout<<"YES"<<endl;
    }else if(a[1]==a[2] and a[0]%2==0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    
  }
  
  return 0;
}