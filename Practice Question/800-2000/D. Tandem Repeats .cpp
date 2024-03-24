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
   int t;cin>>t;

   while(t--){
     string s;
        cin>>s;
 
        int n = s.size();
        int ans = 0;
 
        vector<int> val(n);
 
        for(int len=1; len*2<=n; len++)
        {
            fill(val.begin(), val.end(), 0);
 
            for(int i=0; i+len<n; i++)
                val[i] = (s[i]==s[i+len] || s[i]=='?' || s[i+len]=='?');
 
            for(int i=1;i<n;i++)
                val[i] += val[i-1];
 
            if(val[len-1]==len)     ans = max(ans, 2*len);
 
            for(int i=len; i<n; i++)
            {
                if(val[i]-val[i-len]==len)
                    ans = max(ans, 2*len);
            }
        }
 
        cout<<ans<<"\n";

   }
}


