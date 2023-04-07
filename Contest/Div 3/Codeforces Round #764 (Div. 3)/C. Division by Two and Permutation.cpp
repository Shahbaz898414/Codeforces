#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;
  while(t-->0){
    int n;cin>>n;

    ll a[n],mi=1,ma=0,d=1,f=1;
    for (int i = 0; i < n; i++) {
      cin>>a[i];

    }

    sort(a,a+n);
    for(int i=0;i<n;i++) {
      if(a[i]==mi){
        
        mi++;
        // if(ma==n){
        //   cout<<"YES"<<endl;
        //   break;
        // }
      }else{
        ll m=a[i];
        while(m>0){
          m=m/2;
        }
        a[i]=m;
      }
    }

    for(int i=1;i<=n;i++) {
        d*=i;
        
    }

    for(int i=0;i<=n;i++) {
        f*=a[i];
        
    }


    if(mi==n){
      cout<<"YES"<<endl;
    }
    else if(f==d){
      cout<<"YES"<<endl;
    }else if(f!=d){
      cout<<"NO"<<endl;
    }






    
  }
}