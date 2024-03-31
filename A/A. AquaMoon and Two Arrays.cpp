#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll arr[n],brr[n];
        ll x;
        vector<ll> v,v1;
        ll sp=0,sn=0;
        for (int i = 0; i <n; i++){
          cin>>arr[i];
        }

        for (int i = 0; i < n; i++){
          cin>>brr[i];
        }

        for(int i=0;i<n;i++){
            x=arr[i]-brr[i];
            if(x>0){
                sp+=x;
                while(x--){
                  
                   v.push_back(i);
                }
            }
            else if(x<0) {
                x*=-1;
                sn+=(x);
                while(x--) {
                  v1.push_back(i);
                }
              
            }
            else if(x=0)
            continue;
        }
        if(sp==sn) {
            cout<<sp<<"\n";
            for(int i=0;i<sn;i++)
            {
                cout<<v[i]+1<<" "<<v1[i]+1<<"\n";
            }
        } else cout<<"-1\n";
        
    }
}