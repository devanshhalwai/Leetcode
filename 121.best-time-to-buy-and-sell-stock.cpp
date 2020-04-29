/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        if(n==0 || n==1)
            return 0;
        bool sds=true;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                sds=false;
                break;
            }
        }   
        if(sds)
            return 0;
        else
        {
            vector<int> arr;
            int buy=prices[0],sell,pos;
            for(int i=1;i<n;i++)
            {
                if(buy>prices[i])
                {
                    buy=prices[i];
                }
                else if(prices[i]>buy)
                {
                    sell = prices[i];
                    arr.push_back(sell-buy);
                }
            }
            return *max_element(arr.begin(),arr.end());
        }
        
    }
};
// @lc code=end

