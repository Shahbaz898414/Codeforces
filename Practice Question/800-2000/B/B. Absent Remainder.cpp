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
      

        for (int i = 1;i<=(n/2);i++) 
        cout << a[i] << ' ' << a[0] <<endl;
        // cout<<endl;
                 
    
      
      
      
    }
 
    return 0;
    
}