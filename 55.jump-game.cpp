/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        if(nums.size()<=1)
            return true;
        int index = nums[0];
        for (int i = 0; i < nums.size(); ++i) 
        {
            if(i>index)
                return false;
            if(i+nums[i]>=nums.size()-1)
                return true;
            if(i+nums[i]>index)
                index=i+nums[i];
        }
        return false;
    }
    
};
// @lc code=end