// QUESTION :--->Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// **Answer by Brute Force Approch**
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        for(int val:nums)
        {
            int count=0;

            for(int digit:nums)
            {
                if(digit==val)
                {
                    count++;
                }
            }
            if(count>(n/2))
            {
            return val;
            }
        }
    return ans;
    }
};