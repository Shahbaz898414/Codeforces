#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a)  \
    for (auto &i : a) \
    cin >> i
#define printOutput(a) \
    for (auto &i : a)  \
    cout << i << " "
#define endLine "\n"
#define space << " " <<
#define pushBack pb
#define allElements(a) a.begin(), a.end()
#define reverseAll(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<vector<int>> ans, v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vector<int> a;
        a.push_back(x);
        a.push_back(y);
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    vector<int> temp=v[0];


    for(auto it:v){
        cout<<temp[1]<<" ";
        cout<<it[0]<<" ";
        cout<<endl;
    }
}
