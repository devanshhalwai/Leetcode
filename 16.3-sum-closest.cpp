/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end()); 
        long long int closestSum = 9999999999;
        for (long long int i = 0; i < nums.size() - 2; i++) 
        { 
            long long int ptr1=i+1,ptr2=nums.size()-1; 
            while (ptr1<ptr2) 
            {
                long long int sum=nums[i]+nums[ptr1]+nums[ptr2]; 
                if(abs(target-sum)<abs(target-closestSum)) 
                    closestSum = sum; 
                if(sum>target) 
                    ptr2--; 
                else 
                    ptr1++;
            } 
        } 
        return closestSum;
    }
};
// @lc code=end

