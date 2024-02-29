#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007




int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin >> testCases;
    while (testCases--) {
      int n;cin>>n;


      vector<int>  arr(n);

      int ans=0,val=0;

      for (int i = 0; i < n; i++) {
        cin>>arr[i];
      }

      sort(arr.begin(),arr.end());

      for (int i = n-1; i >=0; i--)
      {
        /* code */
         if(val<arr[i]){
            val=0; ans++;
        }
        val^=arr[i];
      }
      

      cout<<ans<<endl;
      

    }
    return 0;
}


