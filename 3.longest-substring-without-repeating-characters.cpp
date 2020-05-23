/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int start=0,n=s.size(),currL=0,maxL=0;
        vector<int> counter(255,-1);
        for(int i=start;i<n;i++)
        {
            if(counter[s[i]]==-1)
            {
                counter[s[i]]=i;
                currL=i-start+1;
                if(currL>maxL)
                    maxL=currL;
            }
            else
            {
                if(start<counter[s[i]]+1)
                    start=counter[s[i]]+1;
                currL=i-start+1;
                if(currL>maxL)
                    maxL=currL;
                counter[s[i]]=i;
            }
        }
        return maxL;
    }
};
// @lc code=end

