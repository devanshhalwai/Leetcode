/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
            mymap[nums[i]]++;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mymap[nums[i]]-=1;
            if(mymap[target-nums[i]]>0)
                break;
            mymap[nums[i]]+=1;
        }
        vector<int> ans;
        ans.push_back(i);
        int j;
        for(j=0;j<nums.size();j++)
            if(nums[j]==target-nums[i] && j!=i)
                break;
        ans.push_back(j);
        return ans;
    }
};
// @lc code=end

