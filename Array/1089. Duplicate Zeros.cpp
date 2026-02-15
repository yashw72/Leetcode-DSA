// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr)
    {
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==0)
            {
                for(int j=n-1;j>i;j--)
                {
                    arr[j]=arr[j-1];
                }
                i++;
            } 
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
      
    }
};