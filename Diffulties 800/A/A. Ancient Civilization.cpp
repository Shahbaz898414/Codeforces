#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin>>len;
    while(len--) {
        int n,l;
        cin>>n>>l;
        int bits[l];
        for(int i=0;i<l;i++)bits[i]=0;
        for(int i=0;i<n;i++) {
            int t;
            cin>>t;
            for(int j=0;j<l;j++) {
                int bit=(t>>j)&1;
                if(bit==1)bits[j]++;
            }
        }
        
        int ans=0;
        for(int i=0;i<l;i++){
            if(n-bits[i]<bits[i])ans+=(1<<i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
