
#include<iostream>
#include<vector>
using namespace std;
lass Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans;
        // -->Used to store quadruplets
        // 1.Sort Array --> Two Pointer Apprich
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {   
            // 1.Optimization no 1 --> if i point to -2  then why we check again for -2 ?
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
                // continue--> Meaning it skip all downwords part and then i++
            }
            for(int j=i+1;j<nums.size();)
            {
                int k=j+1;
                int l=nums.size()-1;

                while(k<l)
                {
                    long long sum=(long long) nums[i]+(long long) nums[j]+(long long) nums[k]+(long long) nums[l];

                    if(sum>target)
                    {
                        l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;

                        // 3.optimization no 3-->For k 
                        while(k<l && nums[k]==nums[k-1])
                        {
                            k++;
                        }
                    }
                }

                // 2.Second Optimization --> Why After loop Coz for any unique i there must be unique j and if 
                // same j found then again j++
                j++;
                while(j<nums.size() && nums[j]==nums[j-1])
                {
                    j++;
                }
            }
        }
    return ans;   
    }
};