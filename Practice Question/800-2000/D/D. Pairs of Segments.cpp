#include <bits/stdc++.h>

using namespace std;

#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
#define pb     push_back
#define ppb    pop_back

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    _test
    {
        int n;
        cin>>n;

        vector<pair<int, int>> seg(n);
        for(auto &[a, b]: seg)
            cin>>a>>b;

        sort(seg.begin(), seg.end());

        vector<vector<int>> dp(n, vector<int> (2, -1));

        function<int (int, int)> solve = [&](int i, int sel)
        {
            if(i == n)                  return 0;
            if(dp[i][sel] != -1)        return dp[i][sel];

            if(!sel)
                return dp[i][sel] = max(solve(i+1, 1), solve(i+1, 0));

            if(sel)
            {
                int val = 0;
                for(int j=i+1, k; j<n; j++)
                {
                    if(seg[i].ss >= seg[j].ff)
                    {
                        k = j+1;
                        while(k<n && seg[k].ff<=max(seg[i].ss, seg[j].ss))      k++;

                        val = max(val, 2 + max(solve(k, 1), solve(k, 0)));
                    }
                }

                return dp[i][sel] = val;
            }
        };

        cout<<n - max(solve(0, 0), solve(0, 1))<<"\n";
    }
}