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

      ll n;cin>>n;

      ll a[n];
     

      vector<ll> v;
      ll cnt=INT_MAX,sum;

      ll ans =(1<<20)-1;

     
      for (int i = 0; i < n; i++) {
        cin>>a[i];
      }
      // sort(a,a+n);

      for (int i = 0; i < n; i++) {
       if(a[i]==i){
         continue;
       }else{
        //  v.push_back(a[i]);
        ans&=a[i];
       }
      }

      // for(auto it:v){
      //   cout<<it<<" ";
      // }

      // for (int i = 1; i < v.size(); i++) {
      //   sum=v[0]&v[i];
      //   cnt=min(cnt,sum);

      // }


      cout<<ans<<endl;
      
      

        
    }

    return 0;
    
}


