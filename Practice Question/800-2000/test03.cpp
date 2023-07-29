#include <bits/stdc++.h>
using namespace std;

#define ll long long




int main()
{
  int t;
  cin >> t;
  while (t-->0)
  {

    // string s;cin>>s;
    ll n;cin>>n;

    // vector<ll>  arr(n);

    ll cnt=1;

   while(n%cnt==0){
    cnt++;
   }

    cout<<cnt-1<<endl;
    
       
    
  }
  return 0;
}