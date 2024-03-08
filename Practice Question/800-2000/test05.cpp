#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k, x;
        cin >> n >> k >> x;
        if (x < k - 1 || n < k)
            puts("-1");
        else
            printf("%d\n", k * (k - 1) / 2 + (n - k) * (x == k ? k - 1 : x));
    }
}


/*

Note that if min(n,x+1)<k , then the answer is −1 .  Otherwise, there are two cases:  If k=x , then the suitable array looks like [0,1,2,…,k−1,…,k−1] .  If k≠x , then the suitable array looks like [0,1,2,…,k−1,x,…,x] .  In both cases, we can construct the array and calculate its sum in linear time.


If min(n, x + 1) < k, the answer is -1. Otherwise, if k = x, the array is [0, 1, 2, ... , k -1, ... , k - 1]. If k x, the array is [0, 1, 2, ... , k - 1, x, ... , x]. In both cases, we can construct
and calculate the array's sum in linear time. #Algorithm #LinearTime #ArrayConstruction

*/