// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int maxwater=0; //contains max water
        int n=height.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int w=j-i;
                int ht=min(height[i],height[j]);
                int area=w*ht;
                maxwater=max(area,maxwater);
            }
        }
    return maxwater;    
    }
};