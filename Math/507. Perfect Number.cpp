#include<iostream>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) 
    {   
        int ans=0;
        // usually defines ans for comparing with num  
        // 1.We are going to find all divisor lie between 1 to num
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                ans+=i;           
            }
        }
        if(ans==num)
        {
            return true;
        }
    return false;
    }
};