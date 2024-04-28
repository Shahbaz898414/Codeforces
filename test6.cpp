#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int rows, cols;
        cin >> rows >> cols;
        vector<string> grid(rows);
        vector<vector<char>> v(rows, vector<char>(cols));
        int top_count = 0, bottom_count = 0, left_count = 0, right_count = 0;

        for (int i = 0; i < rows; i++)
            cin >> grid[i];

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                v[i][j] = grid[i][j];
            }
        }

        for (int i = 0; i < cols; i++)
        {
            if (grid[0][i] == 'B')
            {
                top_count++;
            }
            if (grid[rows - 1][i] == 'B')
            {
                bottom_count++;
            }
        }

        bool hasBlack = true;
        bool hasWhite = true;

        // Check if the grid contains both black and white squares
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (grid[i][j] == 'B')
                {
                    hasBlack = true;
                }
                else
                {
                    hasWhite = true;
                }
            }
        }

        for (int i = 0; i < rows; i++)
        {
            if (grid[i][0] == 'B')
            {
                left_count++;
            }
            if (grid[i][cols - 1] == 'B')
            {
                right_count++;
            }
        }

        if (!hasBlack || !hasWhite)
        {
            hasBlack = true;
        }

        for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 'B') {
                // Check if all adjacent squares are black
                if ((i > 0 && grid[i - 1][j] == 'W') ||
                    (i < rows - 1 && grid[i + 1][j] == 'W') ||
                    (j > 0 && grid[i][j - 1] == 'W') ||
                    (j < cols - 1 && grid[i][j + 1] == 'W')) {
                    hasBlack = true;
                }
            }
        }
    }

        if ((top_count == 0 && bottom_count == cols) || (top_count == cols && bottom_count == 0) || (left_count == rows && right_count == 0) || (left_count == 0 && right_count == rows) and hasBlack==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}

/*

Alice and Bob are playing a game on n  piles of stones. On each player's turn, they select a positive integer k  that is at most the size of the smallest nonempty pile and remove k  stones from each nonempty pile at once. The first player who is unable to make a move (because all piles are empty) loses.  Given that Alice goes first, who will win the game if both players play optimally?


Input 
The first line of the input contains a single integer t  (1≤t≤10^4 ) — the number of test cases. The description of the test cases follows.  The first line of each test case contains a single integer n  (1≤n≤ 2⋅10^5 ) — the number of piles in the game.  The next line of each test case contains n  integers a[1],a[2],…a[n]  (1≤ a[i] ≤10^9 ), where ai  is the initial number of stones in the i-th pile.  It is guaranteed that the sum of n  over all test cases does not exceed 2⋅10^5.
  
Output 
For each test case, print a single line with the name of the winner, assuming both players play optimally. If Alice wins, print "Alice", otherwise print "Bob" (without quotes).

*/