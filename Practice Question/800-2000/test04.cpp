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
        cin >> n >> k >> ans;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        string s;
        cin >> s;
        if (k == 0)
        {
            cout << ans << endl;
            continue;
        }
        if (s == "AND")
        {
            for (int i = 0; i < n; i++)
            {
                ans = (ans & v[i]);
            }
        }
        else if (s == "OR")
        {
            for (int i = 0; i < n; i++)
            {
                ans = (ans | v[i]);
            }
        }
        else if (k % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                ans = (ans ^ v[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
