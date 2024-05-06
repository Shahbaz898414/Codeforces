#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;




class Solution {
private: 
    void bfs(int i, int j, std::vector<std::vector<int>>& vis, std::vector<std::vector<char>>& grid) {
        vis[i][j] = 1;
        int n = grid.size(), m = grid[0].size();
        std::queue<std::pair<int,int>> q;
        q.push({i, j});
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nc >= 0 && nr < n && nc < m && !vis[nr][nc] && grid[nr][nc] == '1') {
                    q.push({nr, nc});
                    vis[nr][nc] = 1;
                }
            }
        }
    }

public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0));
        int cnt = 0;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    cnt++;
                    bfs(row, col, vis, grid);
                }
            }
        }

        return cnt;
    }
};

int main() {
    // Example usage
    Solution sol;
    std::vector<std::vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    }; // Example input
    int numIslands = sol.numIslands(grid);
    std::cout << "Number of islands: " << numIslands << std::endl;

    return 0;
}



/*


206. Reverse Linked List blind 75,Blind 75,Blind 75 LeetCode Sheet Solved,Blind 75 Sheet Solved,Reverse Linked List blind 75,Reverse Linked List,206. Reverse Linked List,206 Reverse Linked List on leetcode,206 on leetcode,206 on leetcode solved,leetcode,leetcode problem 206,Reverse Linked List c++,Reverse Linked List python,Reverse Linked List solution

*/