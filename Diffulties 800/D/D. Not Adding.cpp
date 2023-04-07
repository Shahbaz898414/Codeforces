#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll check(vector<ll> b,ll k ){
  ll c=0;
  ll v=b.size();
    for (auto it:b) {
       if(k!=it){
         c++;
       }else{
         break;
       }
     
    }
}


 
int main() {
  // ll t;cin>>t;
  // while (t-->0)
  // {
    ll n,c=0,r=0;cin>>n;
    vector<ll>a(n);
    vector<ll>b;
    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>a[i];
      b.push_back(a[i]);
    }

    ll s=1;
    for (ll i = 0;i <n-1 && s<n; i++,s++) {
     ll k =__gcd(a[i],a[s])*1ll;

     if(k==1 ||k==2 || k==3){

     }
     
    }

    cout<<c<<endl;
  // }
  
  return 0;
}
