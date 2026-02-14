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
        int size=height.size();
        int start=0;
        int end=size-1;
        int maxwater=0;

        while(start<end)
        {
            int width=end-start;
            int ht=min(height[start],height[end]);
            int current_water=width*ht;
            maxwater=max(maxwater,current_water);

            if(height[start]<height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
    return maxwater;    
    }
};