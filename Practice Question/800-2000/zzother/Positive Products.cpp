#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;cin>>t;
  while(t--) {
    ll n,x,b,d=0,c=0,pos=0,neg=0;
    cin>>n;

  // cout<<n*x<<endl;

    ll a[n];

    for (int i = 0; i <n; i++) {
      cin>>a[i];
      if(a[i]>0){
        pos++;
      }
      if(a[i]<0){
        neg++;
      }

    }

    pos=pos-1;
    neg=neg-1;

    ll cpos=((pos)*((pos+1))/2);
    ll cneg=((neg)*((neg+1))/2);

    cout<<cneg+cpos<<endl;

    // for (int i = 0; i < n-1; i++)
    // {
      
    //   for (int j = i+1; j < n; j++)
    //   {
        

    //     if(a[i]*a[j]>0){

    //       // cout<<i<<" "<<j<<endl;
    //       // cout<<a[i]<<" "<<a[j]<<endl;
    //       c++;
    //     }
    //   }

    //   // if(c>0){
    //   //   d++;
    //   // }
      
    // }
    // // cout<<endl;

    // cout<<c<<endl;
    

    
  }

  return 0;
}