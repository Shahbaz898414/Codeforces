#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tt; cin >> tt;

    while(tt--) {
        int n, q, sz = 0; cin >> n >> q;

        vector<pair<int,int>>a(n);
        for(auto &i : a) cin >> i.first >> i.second;

        vector<int>queries(q), sizes;
        for(auto &i : queries) cin >> i;

        for(auto it : a) {

            sizes.push_back(sz + 1);

            if(it.first == 1) {
                sz++;
            }
            else {
                if(sz + 1 <= 2e18 / it.second) {
                    sz += sz * it.second;
                }
                else break;
            }
        }

        function<int(int)>processQuery = [&](int number) {
            auto idx = upper_bound(sizes.begin(), sizes.end(), number) - sizes.begin() - 1;
            if(a[idx].first == 1) return a[idx].second;
            else return processQuery((number % (sizes[idx] - 1) == 0 ? sizes[idx] - 1 : number % (sizes[idx] - 1)));
        };


        for(auto &i : queries) cout << processQuery(i) << " ";  cout << "\n";

        
    }
}