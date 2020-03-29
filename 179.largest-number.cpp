/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
class Solution 
{
    public:
        string largestNumber(vector<int>& nums) 
        {
            if(nums.size()==0) 
                return "";
            vector<string> v;
            for(int i=0;i<nums.size();i++)
                v.push_back(to_string(nums[i]));
            sort(v.begin(),v.end(),[](string a,string b)
            {
                string ab=a+b;
                string ba=b+a;
                return ab>ba;
            });
            string result="";
            if(v[0]=="0") 
                return "0";
            for(int i=0;i<v.size();i++)
                result+=v[i];
            return result;
        }
};
// @lc code=end

