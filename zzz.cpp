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


Number of Axes .-
Each robotic manipulator has a number of axes about which it's links
rotate or along Which its links translate. Usually, the frst three
axes, or major axes, are used to establish the position of the wrist,
While the remaining ares are used to establish the crientation
of the dool ov gripper.

2. Capacuy and Speed
Load - canying capacity Varies greaHy between robotS. Fox
example, the Minimaver 5 Micvobor, an educaHonal toble - top
robor, has a load Sarying Capacity of a.2. kg. At the afioise
of the spectrum, he GcA -XRE Extended Reach Industial
Yobot has a load casrying capacity of 4928 kg.
The maximum tool- tip speed can also Vary SubStanHally bekueen
manipulators . The westinghouse series 4000 robot has a
tool- Hp speed of 92 mm/sec, While the Adept One SCARA
robor has a dool Hp speed of 9000 mm/Sec.
w Cycle. Hme - is the ime required to perform a
periodic moHon similar to a simple pick and place operalien.



*/