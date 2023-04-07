#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  ll t;cin>>t;

  while(t-->0) {

   ll n,x,j=1;cin>>n>>x;

   if(n%2==1){
     cout<<x<<" ";
     n--;
   }
   
   ll u=x-1,v=x+1;

    while(n>0){
      cout<<u<<" "<<v<<" ";
      u--;
      v++;
      n-=2;
    }

    cout<<endl;

  }
  return 0;
}