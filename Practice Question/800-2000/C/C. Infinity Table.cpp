#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n,num,row,cl;
        cin>>n;
        num=(ll)ceil(sqrt(n));
        ll sq=num*num;
        ll d=sq-n;
        if(d<num) {
            row=num;
            cl=d+1;
        }
        else {
            cl=num;
            d-=num;
            d=num-d-1;
            row=d;
        }
        cout<<row<<" "<<cl<<"\n";
    }
 
    return 0;
}