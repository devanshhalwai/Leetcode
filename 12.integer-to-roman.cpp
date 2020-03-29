/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution 
{
public:

    int countDigit(long long n) 
    { 
        return floor(log10(n) + 1); 
    } 
    string func1to9(int n)
    {
        if(n==0)
            return "";
        if(n<=3)
        {
            string ans = "I";
            for(int i=1;i<n;i++)
                ans+="I";
            return ans;
        }
        if(n==4)
            return "IV";
        if(n>=5 && n<9)
        {
            string ans = "V";
            for(int i=0;i<(n-5);i++)
                ans+="I";
            return ans;
        }
        if(n==9)
            return "IX";
        return "";
    }
    string func10to90(int n)
    {
        if(n==0)
            return "";
        if(n>=10 && n<=30)
        {
            string ans = "X";
            for(int i=1;i<(n/10);i++)
                ans+="X";
            return ans;
        }
        if(n==40)
            return "XL";
        if(n>=50 && n<90)
        {
            string ans = "L";
            for(int i=5;i<(n/10);i++)
                ans+="X";
            return ans;
        }
        if(n==90)
            return "XC";
        return "";
    }

    string func100to900(int n)
    {
        if(n==0)
            return "";
        if(n>=100 && n<=300)
        {
            string ans = "C";
            for(int i=1;i<(n/100);i++)
                ans+="C";
            return ans;
        }
        if(n==400)
            return "CD";
        if(n>=500 && n<900)
        {
            string ans = "D";
            for(int i=5;i<(n/100);i++)
                ans+="C";
            return ans;
        }
        if(n==900)
            return "CM";
        return "";
    }
    string func1000to3000(int n)
    {
        if(n==0)
            return "";
        if(n>=1000 && n<=3000)
        {
            string ans = "M";
            for(int i=1;i<(n/1000);i++)
                ans+="M";
            return ans;
        }
        return "";
    }

    string intToRoman(int num) 
    {
        int size = countDigit(num);
        vector<int> temp(size);
        int j=size-1;
        while(num>0)
        {
            temp[j--] = num%10;
            num /= 10;
        }
        string ans = "";
        for(int i=0;i<size;i++)
        {
            int n1 = pow(10,size-1-i)*temp[i];
            if(size-1-i==3)
                ans+=func1000to3000(n1);
            if(size-1-i==2)
                ans+=func100to900(n1);
            if(size-1-i==1)
                ans+=func10to90(n1);
            if(size-1-i==0)
                ans+=func1to9(n1);
        }
        return ans;
    }
};
// @lc code=end

