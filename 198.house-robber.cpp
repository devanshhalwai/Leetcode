/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& hval) 
    {
        int n=hval.size();
        if (n == 0) 
        return 0; 
        int value1 = hval[0]; 
        if (n == 1) 
            return value1; 
    
        int value2 = max(hval[0], hval[1]); 
        if (n == 2) 
            return value2; 
    
        // contains maximum stolen value at the end 
        int max_val; 
    
        // Fill remaining positions 
        for (int i=2; i<n; i++) 
        { 
            max_val = max(hval[i]+value1, value2); 
            value1 = value2; 
            value2 = max_val; 
        } 
    
        return max_val; 
    }
};
// @lc code=end

