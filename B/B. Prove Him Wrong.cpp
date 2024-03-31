#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  ll t;
    cin>>t;
    while (t--)
    {
        ll n,f=0;
        cin>>n;
         ll a[n];
        
        a[0]=1;
        
        for(int i=1; i<n; i++){
            a[i]=(a[i-1]*3);
            
            if(a[i]>1000000000){
                f++;
                break;
            }
        }
        
        if(f==1){
            cout<<"NO\n";
            continue;
        }
        
        cout<<"YES\n";
        
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        
        cout<<"\n";
        
    }
  return 0;
}