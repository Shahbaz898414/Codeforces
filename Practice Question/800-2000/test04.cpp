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
        cin >> n ;

        ll pos=0,neg=0,ze=0;


       vector<ll>  arr(n);



       for (ll i = 0; i < n; i++) {
        
            cin>>arr[i];
            if(arr[i]<0) neg++;

            if(arr[i]>0) pos++;

            if(arr[i]==0) ze++;
       }

       sort(arr.begin(),arr.end());






       
        
       
    }
    return 0;
}

