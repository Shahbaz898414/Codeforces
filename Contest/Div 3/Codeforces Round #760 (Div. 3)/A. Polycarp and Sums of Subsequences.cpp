#include<bits/stdc++.h>
#define ll long long
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define pb push_back
using namespace std;



int main()
{
   
    ll t;
    cin>>t;
    while(t--){
      
      ll a[7];
      for(int i=0;i<7;i++){
        cin>>a[i];
      }
     
      cout<<a[0]<<" "<<a[1]<<" "<<(a[6]-a[0]-a[1])<<endl;
    }
  
    return 0;
}


