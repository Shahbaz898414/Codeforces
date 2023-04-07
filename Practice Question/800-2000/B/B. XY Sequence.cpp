#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t-->0){
    ll n,b,x,y,c=0,d=0;
    cin>>n>>b>>x>>y;
    ll a[n+1];

    a[0]=0;

    for (int i = 1; i <=n; i++)
    {
      if(a[i-1]+x<=b){
        a[i]=a[i-1]+x;
      }else{
        a[i]=a[i-1]-y;
      }

      c+=a[i];
    }

    cout<<c<<endl;
    
  }
  return 0;
}