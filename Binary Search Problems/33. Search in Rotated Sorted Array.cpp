
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        // 1.BRUTE FORCE APPROCH
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //     {
        //         return i;
        //     }
        // }
        // 2.Optimal Approch
        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target<=nums[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
    return -1;
    }
};