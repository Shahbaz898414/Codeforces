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

ROBOT:


Point - to- Point motion -> The tool moves to  a sequence of
discrete points in the workspace. The path berween the points is
hot explicity controlled by the user .

//////////////////////

300. Longest Increasing Subsequence blind 75,Blind 75,Blind 75 LeetCode Sheet Solved,Blind 75 Sheet Solved,Longest Increasing Subsequence blind 75,Longest Increasing Subsequence,300. Longest Increasing Subsequence,300 Longest Increasing Subsequence on leetcode,300 on leetcode,300 on leetcode solved,Longest Increasing Subsequence c++,Longest Increasing Subsequence python,Longest Increasing Subsequence solution

/////////////////////////

#30dayschallenge
#challenge
#consistency
#Cp 
#AlgorithmExplained 
#ProblemSolving
#lessons
#learning
#Youtube

Mother it was i who was blessed to have be born as women you
*/