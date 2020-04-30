/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
        for(int i=1;i<nums.size();i++)
            arr[i]+=arr[i-1];
    }
    
    int sumRange(int i, int j) 
    {
        if(i==0)
            return arr[j];
        else
            return arr[j]-arr[i-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

