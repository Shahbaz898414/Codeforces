
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, j, n, ans, num; 
    string a;cin>>t;
    for(;t--;) {   
        cin>>a;
        n=a.size();ans=n-2;
        for(i=0; i<n-1; i++) {
            for(j=i+1; j<n; j++) {
                num=0;
                
                num=num*10+a[i]-48;
                num=num*10+a[j]-48;
                
                if((num%25)==0) {
                    ans=min(ans, n-i-2);
                }
            }
        }
        cout<<ans<<"\n"; 
    }
}
