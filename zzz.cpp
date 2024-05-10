#include <vector>
#include <algorithm>

class Solution {
public:
    static bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b){
        return a.second < b.second;
    }
    
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) {
            return 0;
        }
        
        int n = intervals.size();
        std::vector<std::pair<int, int>> v(n);
        
        for(int i = 0; i < n; i++) {
            v[i].first = intervals[i][0];
            v[i].second = intervals[i][1];
        }
        
        std::sort(v.begin(), v.end(), cmp);

        int end = v[0].second;
        int count = 0; 

        for(int i = 1; i < n; i++) {
            if(v[i].first < end) {
                count++;
            } else {
                end = v[i].second;
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    std::vector<std::vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    int result = sol.eraseOverlapIntervals(intervals);
    std::cout << "Result: " << result << std::endl;
    return 0;
}







/*

class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        ROWS, COLS = len(heights), len(heights[0])
        pac, atl = set(), set()

        def dfs(r, c, visit, prevHeight):
            if ((r, c) in visit or
            r < 0 or c < 0 or r == ROWS or c == COLS or
            heights[r][c] < prevHeight):
                return
            visit.add((r, c))
            dfs(r + 1, c, visit, heights[r][c])
            dfs(r - 1, c, visit, heights[r][c])
            dfs(r, c + 1, visit, heights[r][c])
            dfs(r, c - 1, visit, heights[r][c])

        for c in range(COLS):
            dfs(0, c, pac, heights[r][c])
            dfs(ROWS - 1, c, atl, heights[ROWS - 1][c])

        for r in range(ROWS):
            dfs(r, 0, pac, heights[r][c])
            dfs(r, COLS - 1, atl, heights[r][c])
        
        res = []
        for r in range(ROWS):
            for c in range(COLS):
                if (r, c) in pac and (r, c) in atl:
                    res. append([r, c])

        return res


class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        hm = {}
        ans = 0

        l= 0
        for r in range(len(s)):
            hm[s[r]] = 1 + hm.get(s[r]],0)

            whibe (r-1+1) - max(hm.values()) > k:
                hm[s[1]] -= 1
                l += 1

            ans = max(ans, r-1+1)
        return ans

*/