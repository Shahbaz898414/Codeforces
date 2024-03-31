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
 
      ll n,k;cin>>n>>k;
      if(k==1){
        cout<<"YES"<<endl;
        for (int i = 1; i <=n; i++) {
          cout<<i<<endl;
        }
 
        continue;
        
      }
 
      if(n%2){
        cout<<"NO"<<endl;
        continue;
      }
 
      cout<<"YES"<<endl;
 
      for(int i=1;i<=n*k;i+=2) {
        int c=0;
        while(c<k){
          cout<<i<<" ";
          c++;i+=2;
        }
        i-=2;
        cout<<endl;
      }
 
      for (int i =2; i <=n*k; i+=2) {
        int c=0;
        while(c<k){
          cout<<i<<" ";
          c++;i+=2;
        }
        i-=2;
        cout<<endl;
      }
    }
 
    return 0;
    
}