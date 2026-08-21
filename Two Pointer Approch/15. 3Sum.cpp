#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {   
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans; 

        for(int i=0;i<nums.size();i++)
        {      
            // 1.Optimization no 1 --> if ith index have same element then skip it its 
            // worthless and meaning less
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
                // continue;-->it skips the while below part and iterate i++
            }
            int j=i+1; 
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }else if(sum>0)
                {
                    k--;                  
                }else
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;
                    }
                }
            }
        }  
    return ans;
    }
};