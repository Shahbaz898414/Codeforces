#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--) {
        
        cin>>n;
        int a[n],sum=0;
        for (int i = 0; i <n; i++) {
          cin>>a[i];
        }

        int ans=0;

        for (int i = 1; i <n-1; i++) {
          if(a[i]>a[i-1] and a[i]>a[i+1]){
            if(i+2<n and a[i+2]>a[i]) {
              a[i+1]=a[i+2];

            }else{
              a[i+1]=a[i];
            }

            ans++;
          }
        }
        
        cout<<ans<<endl;
        for (int i = 0; i <n; i++) {
          cout<<a[i]<< " ";
        }
        cout<<endl;
     
    }
    return 0;
}

