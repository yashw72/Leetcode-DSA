// 2815. Max Pair Sum in an Array
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// You are given an integer array nums. You have to find the maximum sum of a pair of numbers from nums such that the largest digit in both numbers is equal.

// For example, 2373 is made up of three distinct digits: 2, 3, and 7, where 7 is the largest among them.

// Return the maximum sum or -1 if no such pair exists.
class Solution {
public:
    int getMaxDigit(int num)
    {
    int maxDigit = 0;

    while(num > 0)
    {
        int digit = num % 10;
        maxDigit = max(maxDigit, digit);
        num = num / 10;
    }

    return maxDigit;
    }

    int maxSum(vector<int>& nums) 
    {
       int maxsum=-1;  
    //    vector<int> ans;
       int n=nums.size();

       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            int maxdigit1=getMaxDigit(nums[i]);     
            int maxdigit2=getMaxDigit(nums[j]);

            if(maxdigit1==maxdigit2)  
            {   
                int pairsum=nums[i]+nums[j];
                maxsum=max(maxsum,pairsum);
            }      
        }
        
       } 
    return maxsum; 
    }

};