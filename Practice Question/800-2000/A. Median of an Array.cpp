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

  while (t--) {

   int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }


    std::sort(a.begin(), a.end());


    int p = (n + 1) / 2 - 1;


    int res = std::count(a.begin() + p, a.end(), a[p]);


    cout << res << "\n";
    

  }
}

/*

// iSS SolutIon t
public int[][] insert(int[][] intervals, int[] newInterval) {
    List<int[]> result = new ArrayList();
    for(int[] in: intervals) {
        if(in[1] < newInterval[0]) {
           result.add(in);
        } else if(newInterval[1] < in[0]) {
           result.add(newInterval);
          newInterval = in;
        } else {
            newInterval[0] = Math.min(newInterval[0], in[0]);
            newInterval[1] = Math.max(newInterval[1], in[1]);
        }
    }
    
    result.add(newInterval);

    return result.toArray(new int[result.size()][]);

}

*/