#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define readInput(a) \
  for (auto &i : a)  \
  cin >> i
#define printOutput(a) \
  for (auto &i : a)    \
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
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> adj[n + 1];
    for (int i = 1; i < n; i++)
    {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }

     int left = 0, right = n, answer = 0;

    auto ok = [&](int tree) {
        int cut=0;
    };



     while(left<=right){
       int mid=(left+right)/2;

      if(ok(mid)) answer = mid, left = mid + 1;
      else right=mid-1;
      
     }


  }
}
