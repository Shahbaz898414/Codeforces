include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t-->0){
 
      ll w,h;cin>>w>>h;
 
      ll n,x,d,mx=INT_MIN;
 
      for (int i = 0; i <4; i++) {
        cin>>n;
        d=0;
        for(int j=0;j<n;j++){
          cin>>x;
          if(j==0) d=x;
          else if(j==n-1){
            d=x-d;
          }
        }
        if(i<2){
          d*=h;
        }else{
          d*=w;
        }
 
        mx=max(mx,d);
 
 
      }
 
 
      cout<<mx<<endl;
      
    }
 
    return 0;
    
}