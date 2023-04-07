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

      // ll a[n];

      pair<ll,ll> a[n];

      for (int i = 0;i < n; i++) {
        cin>>a[i].first;
        a[i].second=i;
      }

       sort(a,a+n);
 
        ll time=0;
        int ans[n];
        int idx=1;
        for(int i=n-1;i>=0;i-=2) {   
            ll temp = 2*idx;
            time= time + (a[i].first)*temp;
            ans[a[i].second]=idx;
 
            idx++;
        }
 
        idx=-1;
        for(int i=n-2;i>=0;i-=2) {
            int temp = 2*abs(idx);
            time = time  +  (a[i].first)*temp;
            ans[a[i].second]=idx;
            idx--;
        }
 
        cout<<time<<endl;
        cout<<0<<' ';
        for(int i=0;i<n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;
      
    }
 
    return 0;
    
}