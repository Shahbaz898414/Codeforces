#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int ans = INT_MAX;
        int eve = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
                eve++;
            if (num % k != 0)
            {
                int a = num % k;
                ans = min(ans, k - a);
            }
            else
                ans = 0;
        }
        if (k == 4 && eve >= 2 || ans == 0)
            cout << 0 << endl;
        else if (k == 4 && eve == 1)
            cout << 1 << endl;
        else if (k == 4)
            cout << min(2ll, ans) << endl;
        else
            cout << ans << endl;
    }
}


/*



*/