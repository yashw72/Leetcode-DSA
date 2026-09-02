#include<iostream>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) 
    {  
        while(b!=0)
        {
            int carry =(a&b)<<1; 
            // We store carry beacuse later than we update a and b for exculsive OR Operation  
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};