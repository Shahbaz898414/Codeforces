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
  int t; cin >> t;

  while (t--) {

    int n, k; cin >> n ;
    vector<int> arr(n);

    set<int> se;

    for (int i = 0; i <n; i++)
    {
      /* code */
      cin>>arr[i];

      se.insert(arr[i]);
    }


    cout<<n-se.size()<<endl;


    


    
  }
}
