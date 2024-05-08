#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
    ll n;cin>>n;

    string s;cin>>s;

    // vector<char,>
    }

    return 0;
}





































/*

You are given a string S of length N, containing only the characters a, b, and c.

In one move, you can modify S as follows:

. Choose three indices i, j, k(1 ≤ i < j < k≤ |S|) such that Si = a, Sj = b, Sk = c.
That is, choose some subsequence of S that equals abc.

. Then, delete either the a or the c from S, that is, either index i or index k.
Note that this reduces the length of S by 1.

For example, if S = cbbacbacc, you can choose i = 4, j = 6, k = 8 (the underlined indices), and
then delete either index 4 (obtaining S = cbbcbacc) or index 8 (obtaining S = cbbacbac).

Find the minimum number of moves that can be made on S, such that it's impossible to perform any further moves on the resulting string.

Input Format

. The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of two lines of input.
. The first line of each test case contains a single integer N - the length of S.
o The second line of each test case contains the string S of length N.

Output Format

For each test case, output on a new line minimum possible number of moves that can be made on S,
such that it's not possible to perform any further moves.


#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int minMoves(string& s) {
    int n = s.size();
    vector<int> aPos, cPos;
    int moves = 0;

    // Find positions of 'a' and 'c'
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            aPos.push_back(i);
        } else if (s[i] == 'c') {
            cPos.push_back(i);
        }
    }

    // Iterate through 'b's and calculate minimum moves
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            int minDist = numeric_limits<int>::max();
            // Find the closest 'a' on the left
            for (int j : aPos) {
                if (j < i) {
                    minDist = min(minDist, i - j);
                }
            }
            // Find the closest 'c' on the right
            for (int j : cPos) {
                if (j > i) {
                    minDist = min(minDist, j - i);
                }
            }
            moves += minDist;
        }
    }

    return moves;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        cout << minMoves(S) << endl;
    }

    return 0;
}
////////////////////////////////////////////


 int N; // Length of string S
        cin >> N;
        string S;
        cin >> S; // Read string S

        // Define counters for subsequences that can lead to "abc"
        long long cnt_a = 0, cnt_ab = 0, cnt_abc = 0;

        // We will also need to track deletions to avoid double counting
        long long removed_a = 0, removed_c = 0;

        // Scan through each character in the string
        for (int i = 0; i < N; i++) {
            if (S[i] == 'a') {
                // Increment the count of 'a' found in S
                cnt_a++;
            } else if (S[i] == 'b') {
                // Daily with previous 'a' characters to form "ab"
                cnt_ab += (cnt_a - removed_a);
            } else if (S[i] == 'c') {
                // Use 'ab' to create "abc"
                cnt_abc += (cnt_ab - removed_c);
            }
        }

        // Output the calculated minimum moves required to make
        // It's impossible to further reduce "S" to remove "abc"
        cout << cnt_abc << "\n"; // Output the minimum number of moves

        // Reset the counts for the next test case
        cnt_a = cnt_ab = cnt_abc = 0;


*/