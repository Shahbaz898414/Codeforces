#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,k;cin>>n>>k;

    ll a[n];

    for (int i = 0; i < n; i++) {
      
      cin>>a[i];
    }

    int c=0;
    bool g=0;

    for (int i = 0; i < n; i++)
    {
      if(a[i]<=k){
        c++;
      }else{
       
        g=1;
         break;
      }
    }

    if(g==1){
      for (int i = n-1; i >=0; i--) {
      /* code */
      if(a[i]<=k){
        c++;
      }else{
        break;
      }
     }
    }
    
    
    cout<<c<<endl;

    
    return 0;
}