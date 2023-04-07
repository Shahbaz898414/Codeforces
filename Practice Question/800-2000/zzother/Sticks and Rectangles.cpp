#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  
  
   int t;cin>>t;

        while(t--){
          ll n;cin>>n;
          ll a[n];

          set<ll> s;

          for (int i = 0; i < n; i++)
          {
            /* code */
            cin>>a[i];
            s.insert(a[i]);
          }

          ll d=s.size();
          

          if(n==1){
            cout<<1<<endl;
          }else if(n==2){
            cout<<2<<endl;
          }else if(n==3){
            cout<<n<<endl;
          }else if(n==4){
            cout<<0<<endl;
          }else{

            // if(d<4){
            //   cout<<d<<endl;
            // }else if(d==4){
            //   cout<<0<<endl;
            // }else{

            //   if(d%4==0){
            //     cout<<0<<endl;
            //   }else{
                ll g=n%4;
                cout<<abs(4-g)<<endl;
          //     }

            
          //   }

          }

        }
  return 0;
}