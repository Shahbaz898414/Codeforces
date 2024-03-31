#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
        while(t--) {
            ll a1,a2,a3;cin>>a1>>a2>>a3;

            ll d=abs(a1+a3-2*a2);

            ll min1=INT_MAX;

            if(d%3==0){
              cout<<0<<endl;
            }else{
              cout<<1<<endl;
            }
                      
        }

    return 0;
}