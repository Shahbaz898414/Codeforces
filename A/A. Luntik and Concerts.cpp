#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, x;
    cin >> t;
    while (t-->0) {
      ll a,b,c;
        cin>>a>>b>>c;
        b*=2;
        c*=3;
        a+=b;
        a+=c;
        cout<<a%2<<"\n";
    }
    return 0;
}