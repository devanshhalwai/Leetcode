/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0, n = s.size(),mainans=0;
        long int ans= 0;            
        bool neg = false;
        while (i<n && s[i]==' ')
            i++;
        if(s[i]=='-' || s[i]=='+')
        {
            if(s[i]=='-')
                neg=true;
            i++;
        }
        while (i<n && (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'))
        {
            if(ans*10>INT_MAX)
            {
                if(neg==true)
                    return INT_MIN;
                else
                    return INT_MAX;    
            }    
            ans=ans*10;
            if(ans+s[i]-'0'>INT_MAX)
            {
                if(neg==true)
                    return INT_MIN;
                else
                    return INT_MAX;    
            }
            ans+=s[i]-'0';
            i++;
        }
        if(neg==true)
            ans=ans*-1;
        mainans=ans;
        return mainans;
    }
};
// @lc code=end
