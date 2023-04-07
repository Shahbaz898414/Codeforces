#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

//   freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

  
   ll n,d=1;cin>>n;
    ll a[n-1];
    ll f[200001]={0};

    for (ll i = 0; i <n-1; i++) {
      cin>>a[i];
      f[a[i]]++;
      // cout<<f[a[i]]<<endl;
    }
    
    sort(a,a+n);

    for (ll i = 1; i <200001; i++) {
      if(f[i]==0){
        cout<<i;
        break;
      }
    }
    
    
  return 0;
}