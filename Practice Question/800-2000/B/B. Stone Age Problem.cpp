#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
      ll n,q;
      cin>>n>>q;
      ll ar[n+4];
      map<ll,ll>mp1,mp2;
      ll sum=0;
      for(ll i=1;i<=n;i++) {
          cin>>ar[i];
          sum+=ar[i];
      }
      ll up=-1;
      while(q--) {
          ll a;
          cin>>a;
          if(a==1)
          {
              ll i,x;
              cin>>i>>x;
              if(up==-1)
              {
                  if(x>=ar[i])sum+=(x-ar[i]);
                  else sum-=(ar[i]-x);
                  ar[i]=x;
                  cout<<sum<<endl;
              }
              else
              {
                  ll z;
                  if(mp1[i]==0)z=up;
                  else z=mp1[i];
                  if(x>=z)sum+=x-z;
                  else sum-=z-x;
                  cout<<sum<<endl;
                  mp1[i]=x;
              }
          }
          else
          {
              ll x;
              cin>>x;
              cout<<x*n<<endl;
              sum=x*n;
              mp1.clear();
              up=x;
          }
      }
    

    return 0;
    
}


