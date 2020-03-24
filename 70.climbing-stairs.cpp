/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) 
    {
        n=n+1;
        int res[n]; 
        res[0]=1; 
        res[1] = 1; 
        for (int i=2; i<n; i++) 
        { 
           res[i] = 0; 
           for (int j=1; j<=2 && j<=i; j++) 
             res[i] += res[i-j]; 
        } 
        return res[n-1]; 
    }
};
// @lc code=end

