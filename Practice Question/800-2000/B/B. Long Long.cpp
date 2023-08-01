#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    ll n;
     cin>>n;
     ll a[n];
     for(ll i=0;i<n;i++)
     cin>>a[i];
     ll ans=0;
     ll op=0;
     
     for(ll i=0;i<n;i++){
         if(a[i]>=0){
             ans+=a[i];
             continue;
         }
         op++;
         ll j=i;
         while(j<n && a[j]<=0){
            ans+=abs(a[j]);
            j++;
         }
         i=--j;
     } 
     
     cout<<ans<<" "<<op<<"\n";
  
}

return 0;
}
