#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(std::string t1, std::string t2) {
        int m = t1.length();
        int n = t2.length();

        // Create a matrix to store the lengths of common subsequences
        std::vector<std::vector<int>> matrix(m + 1, std::vector<int>(n + 1, 0));
      

        // Fill the matrix bottom-up
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (t1[i] == t2[j]) {
                    matrix[i][j] = 1 + matrix[i + 1][j + 1];
                } else {
                    matrix[i][j] = std::max(matrix[i][j + 1], matrix[i + 1][j]);
                }
                
            }
            
        }

        
        

        // Return the length of the longest common subsequence
        return matrix[0][0];
    }
};

int main() {
    // Test case
    Solution solution;
    std::string t1 = "abcde";
    std::string t2 = "ace";
    int result = solution.longestCommonSubsequence(t1, t2);
    cout << "Length of longest common subsequence: " << result << endl;

    return 0;
}







/*

class Solution:
    def longestCommonSubsequence(self, t1: str, t2: str) -> int:
        matrix =[[0 for j in range(len(t2)+1)] for i in range(len(t1)+1)]

        for i in range(len(t1)-1, -1, -1):
            for j in range(len(t2)-1, -1, -1):

            if t1[i] == t2[j]:
            matrix[i][j] =1 + matrix[i+1][j+1]
            else:
            matrix[i][j] = max(matrix[i][j+1],matrix[i+1][j])
        return matrix[0][0]


*/