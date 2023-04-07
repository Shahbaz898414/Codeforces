#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j;
    cin>>t;
    
    for(;t-->0;) {
        cin>>n;
        string a[n-2];
        
        for(i=0; i<n-2; i++) {
            cin>>a[i];
        }
        
            j=-1;
            for(i=0; i<n-3; i++) {
                if(a[i][1]!=a[i+1][0]){
                    j=i;
                    break;
                }
            }
            
            if(j==-1) {
                cout<<a[0];
                for(i=1; i<n-2; i++) {
                    cout<<a[i][1];
                }
                cout<<"b\n";
            }else {
                for(i=0; i<n-2; i++) {
                    if(i==j) {
                        cout<<a[i];
                    }else if(i==n-3) {
                        cout<<a[i];
                    }else {
                        cout<<a[i][0];
                    }
                }
                cout<<"\n";
            }
    }
}


