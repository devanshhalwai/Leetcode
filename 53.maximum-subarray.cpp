/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {
        int max_so_far = a[0]; 
        int curr_max = a[0]; 
        for (int i = 1; i < a.size(); i++) 
        { 
            curr_max = max(a[i], curr_max+a[i]); 
            max_so_far = max(max_so_far, curr_max); 
        } 
        return max_so_far;
    }
};
// @lc code=end

