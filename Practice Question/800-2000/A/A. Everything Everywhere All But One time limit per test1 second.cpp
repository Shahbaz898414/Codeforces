#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

    ll t;cin>>t;

    while(t-->0) {
      ll n,cnt=0;cin>>n;

      int sum=0;

      ll a[n];
    

      for (int i=0; i <n; i++) {
          cin>>a[i];
          sum+=a[i];
      }

     
        for (int i = 0; i <n; i++)
        {
          double y=sum-a[i];
          double ans=double(y)/double(n-1);

          if(ans==a[i]){
            cout<<"YES"<<endl;
            cnt=1;
            break;
          }
        }

        if(cnt==0){
          cout<<"NO"<<endl;
        }
        

    }
      
      
  

  return 0;
}
