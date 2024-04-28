#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(), nums.end());
        int mi=1,mx=1;

        for(auto it:nums){
            if(it==0){
                mi=1;
                mx=1;
                continue;
            }

            int tmp=mx*it;
            mx = max({it * mx, it * mi, it});
            mi = min({tmp, it * mi, it});
            res = max(res, mx);
        }

        return res;
    }
};






















int main() {
    std::vector<int> nums = {2, 3, -2, 4}; // Example input
    Solution solution;
    int maxProd = solution.maxProduct(nums);
    std::cout << "Maximum product of a subarray: " << maxProd << std::endl;
    debugger
    return 0;
}



/*
152. Maximum Product Subarray blind 75,
Blind 75,
Blind 75 LeetCode Sheet Solved,
Blind 75 Sheet Solved,
Maximum Product Subarray blind 75,
Maximum Product Subarray,
152. Maximum Product Subarray,
152. Maximum Product Subarray,
152 Maximum Product Subarray on leetcode,
152 on leetcode,152 on leetcode solved, 
leetcode,leetcode problem 152,
Maximum Product Subarray c++,
Maximum Product Subarray python,
Maximum Product Subarray solution


*/


/*

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res = max(nums)
        curMin, curMax = 1, 1

        for n in nums:
            if n == 0:
                curMin, curMax = 1, 1
                continue
            tmp = curMax * n
            curMax = max(n * curMax, n * curMin, n)
            curMin = min(tmp, n * curMin, n)
            res = max(res, curMax)
        return res


*/