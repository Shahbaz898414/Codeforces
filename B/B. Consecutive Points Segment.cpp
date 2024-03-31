#include <bits/stdc++.h>
#define ll long long int

using namespace std;
 
int main() {

    ll t;cin>>t;

    while(t-->0) {

      ll n;cin>>n;

      ll a[n],cnt=0,ans=0;

      // set<ll> s;

      for (int i=0;i<n;i++){
        cin>>a[i];

        // s.insert(a[i]+1);
      }

      bool flag=true,mov=false;

      for (int i = 1; i <n; i++) {
        ll gap=a[i]-a[i-1];
        if(gap==1){
          continue;
        }else if(gap==2 and !mov){
          mov=true;
          continue;
        }else if(gap==2){
          a[i]=a[i]-1;
        }else if(gap==3){
          if(mov==false){
            mov=true,a[i]=a[i]-1;
          }else{
            flag=false;
            break;
          }
        }

        else{
          flag=false;
          break;
        }
      }


      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
     
      
    }
 
    return 0;
}