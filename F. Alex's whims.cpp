#include <bits/stdc++.h>
#define int long long

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.length() + 1, false);
        dp[s.length()] = true;

        unordered_set<string> dict(wordDict.begin(), wordDict.end());

        for (int i = s.length() - 1; i >= 0; --i) {
            for (const string& word : dict) {
                if (i + word.length() <= s.length() && s.substr(i, word.length()) == word) {
                    dp[i] = dp[i + word.length()];
                }
                if (dp[i]) {
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
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};

    // Check if the string can be segmented
    bool result = sol.wordBreak(s, wordDict);

    // Output the result
    cout << (result ? "True" : "False") << endl;
}

