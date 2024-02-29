#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, k;
        ll ans;
        cin >> n >> k ;
       
    }
    return 0;
}


/*


The intution behind this problem is min of the subsegment lie between 1 to n. So its just the length that have to be seen. For 1 possible length are 1 to n. For 2 possible length are 1 to n-1. Similarly for number i possible lengths are 1 to n-(i-1). So now just we have fix the minimun number and check if it divides the required weight. If it divides then wether the lenght needed is in required region or not. So we checked if x%i == 0 if yes then it will be the minimum number of that subsegment. Then to find length we did x/i and checked if its possible. Finally we update our bool if both the conditions are met and get out of for loop.

*/