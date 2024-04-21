#include <bits/stdc++.h>
#define int long long

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  bool wordBreak(string s, vector<string> &w)
  {
    vector<bool> dp(s.length() + 1, false);

    dp[s.length()] = true;

    unordered_set<string> dist(w.begin(), w.end());

    for (int i = s.length() - 1; i >= 0; i--)
    {
      for (const string &it : dist)
      {

        if(i+it.length()<=s.length() and s.substr(i,it.length())==it){
          dp[i] = dp[i + it.length()];
        }
        

        if (dp[i])
        {
          break;
        }
      }
    }

    return dp[0];
  }
};

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Solution sol;

  // Example input
  string s = "neetcode";
  vector<string> wordDict = {"neet", "code"};

  
  bool result = sol.wordBreak(s, wordDict);

  // Output the result
  cout << (result ? "True" : "False") << endl;
}
