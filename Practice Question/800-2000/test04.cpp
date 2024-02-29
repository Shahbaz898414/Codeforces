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


        // 


        cin >> n ;


       vector<ll>  arr(n);

       for (ll i = 0; i < n; i++)
       {
        /* code */
        cin>>arr[i];
       }
       
        
       
    }
    return 0;
}


/*

The question statement is easy to understand. We need to replace all ci's in s with given pi's. So intitally we take a map to store c's and p's. Then we traverse through the string and find search in map if s[i] exists. If it exists then we replace that s[i] by p that is given bt mp[s[i]]. The tricky part here comes with the removal of last zeros. So we will remove last zeros only if we get a decimal in the modified string. So we need a bool decimal to tell us if we can remove las zeros. After removing starting and ending zeros we can output the final answer.

*/
