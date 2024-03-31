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

     
      for (int i = 0; i < n; i++) {
        cin>>a[i];
      }
      sort(a,a+n);

      if(n%2!=0){
        cout<<"NO"<<endl;
        continue;
      }

      for(int i=0,j=n/2;j<n,i<n/2;i++,j++){
        v.push_back(a[i]);
        v.push_back(a[j]);
      }

      bool ok=0;

      for (int i = 0; i < v.size(); i++)  {
       
        if(i==0) {
          if(v[i]>v[i+1] and v[i]>v[n-1]){
            continue;
          }else if(v[i]<v[i+1] and v[i]<v[n-1]) {
            continue;
          }else{
            ok=1;
          }
        }else if(i==n-1){

          if(v[i]>v[0] and v[i]>v[i-1]){
            continue;
          }else if(v[i]<v[0] and v[i]<v[i-1]) {
            continue;
          }else{
            ok=1;
          }
        }else{

          if(v[i]>v[i+1] and v[i]>v[i-1]){
            continue;
          }else if(v[i]<v[i+1] and v[i]<v[i-1]) {
            continue;
          }else{
            ok=1;
          }

        }
      }

      if(ok==1){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;

        for(auto it:v){
          cout<<it<<" ";
        }
        cout<<endl;
      }
      

     
        
    }

    return 0;
    
}


