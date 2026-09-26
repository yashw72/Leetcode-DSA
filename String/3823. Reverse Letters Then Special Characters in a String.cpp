#include<iostream>
using namespace std;
class Solution {
public:
    string reverseByType(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<=end)
        {
            if(!islower(s[start]))
            {
                start++;
            }
            else if(!islower(s[end]))
            {
                end--;
            }
            else
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }

        start=0;
        end=s.length()-1;
        while(start<=end)
        {
            if(islower(s[start]))
            {
                start++;
            }
            else if(islower(s[end]))
            {
                end--;
            }
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        
    return s;   
    }
};