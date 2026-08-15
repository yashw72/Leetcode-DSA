#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int atmost(vector<int>& nums, int k)
    {
        int left=0;
        int right=0;
        int sum=0;
        int count=0;

        while(right<nums.size())
        {
            sum+=nums[right]%2;

            while(sum>k)
            {
                sum-=nums[left]%2;
                left++;
            }
            count=count+(right-left+1);
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        return atmost(nums,k)-atmost(nums,k-1);     
    }
};