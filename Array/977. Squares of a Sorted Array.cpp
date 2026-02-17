// 977. Squares of a Sorted Array
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n);

        int start=0;
        int end=n-1;

        while(start<=end)
        { 
                ans[start]=nums[start]*nums[start];
                ans[end]=nums[end]*nums[end];
                start++;
                end--;
                 
        }
    sort(ans.begin(),ans.end()); 
    return ans;    
    }
};