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

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= size(nums);
       
        for(int i=0;i<n;i++){
            int x=nums[i]; // x = current element
            
        // x>=1 && x<=n : to check if x is in range[1, n]
        // x != i+1 : skip if at index i correct element is present.
        // nums[x-1]!=x: skip if at index x-1 correct element is present
            while(x>=1 && x<=n && x!=i+1 && nums[x-1]!=x){
                swap(nums[x-1],nums[i]);
                x=nums[i];
            }
        }


        for(int i=0;i<n;i++){
            if(nums[i] == i+1)continue;
                return i+1;       
            
        }
        
        return n+1;
    }
};

*/