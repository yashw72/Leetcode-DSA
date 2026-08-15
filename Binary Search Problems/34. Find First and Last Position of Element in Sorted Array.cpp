#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int firstoccurence(vector<int>& nums,int target)
    {   
        int n=nums.size();
        int low=0;
        int high=n-1;
        int first=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]==target)
            {
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return first;
    }


    int lastoccurence(vector<int>& nums,int target)
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int last=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]==target)
            {   
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {   
        int first=firstoccurence(nums,target);
        int last=lastoccurence(nums,target);
        if(first==-1 || last==-1)
        {
            return {-1,-1};
        }
        // // 1.BRUTE FORCE SOLUTION
        // int first=-1;
        // int last=-1;

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //     {
        //         if(first==-1)
        //         {
        //             first=i;
        //         }
        //         last=i;    
        //     }
        // }

        // 2.Optimal Solution

    return {first,last};   
    }
};