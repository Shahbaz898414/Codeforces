#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t-->0){

      ll n, l, r, k,cprice=0,c=0;
      cin>>n>>l>>r>>k;

      ll a[n];

      for (int i = 0; i < n; i++)
      {
        
        cin>>a[i];
      }
      sort(a,a+n);

      for (int i = 0; i < n; i++) {

 
        if(a[i]>=l and a[i]<=r) {
          cprice+=a[i];

          if(cprice<=k){
            c++;
          }
          // else{
          //   cprice-=a[i];
          // }
        }

      }

      cout<<c<<endl;
      
      
      

    }

    return 0;
    
}


