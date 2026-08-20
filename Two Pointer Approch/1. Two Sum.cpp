#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {

        // 1.BRUTEFORCEAPPROCH
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum=nums[i]+nums[j];
                if(sum==target)
                {
                    return {i,j};
                }
            }
        }
    return {};

    // 2.BETTERAPPROCH
    // sort(nums.begin(),nums.end());
    // int start=0;
    // int end=nums.size()-1;

    // while(start<end)
    // {
    //     int sum=nums[start]+nums[end];
    //     if(sum==target)
    //     {
    //         return {start,end};
    //     }
    //     else if(sum>target)
    //     {
    //         end--;
    //     }
    //     else
    //     {
    //         start++;
    //     }
    // }
    return {};
    }
};