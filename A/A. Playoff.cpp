#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n;cin>>n;
    if(n==1){
      cout<<n<<endl;
    }else{

      int max1=max((pow(2,n)-1),(pow(2,n-1)-1));
      cout<<max1<<endl;
      
    }
  }
  return 0;
}