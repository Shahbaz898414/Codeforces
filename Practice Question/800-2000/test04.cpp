#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {

        int n; ll x;
        cin >> n >> x;
        int flag = 0;
        for (int i = 1;i<=n;i++) {
            // cout<<x%i<<" "<<n-x/i+1<<endl;
            if (x%i==0 && n-x/i+1>=i) {
                flag = 1;
                break;
            }
        }


        if (flag==1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
       
    }
    return 0;
}

