#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++)
        {   
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            } 
            int j=i+1;
            int k=nums.size()-1;

            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(closest-target))
                {
                    closest=sum;
                }
                else if(sum>target)
                {
                    k--;
                }
                else if(sum<target)
                {
                    j++;
                }
                else
                {
                   return target;
                }
                // while(j<k && nums[j]==nums[j-1])
                // {
                //     j++;
                // }
            }
        }  
    return closest;     
    }
};