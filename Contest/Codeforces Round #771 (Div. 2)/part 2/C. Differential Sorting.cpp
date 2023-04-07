#include <bits/stdc++.h>
#define ll long long int
using namespace std;
   
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t,n;
    cin>>t;
    while(t--) {
        
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i<n; i++) {
          cin>>a[i];
        }

        ll ans=0;

        if(a[n-2]>a[n-1]) {
          cout<<-1<<endl;
        }else if(a[n-1]>=0) {
          cout<<n-2<<endl;
          for (int i = 0; i <n-2; i++) {
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;

          }
          
        }else{
            vector<int> b=a;
            sort(b.begin(),b.end());

            if(b==a){
              cout<<0<<endl;
            }else{
              cout<<-1<<endl;
            }
            
        }
    }

    return 0;
}

