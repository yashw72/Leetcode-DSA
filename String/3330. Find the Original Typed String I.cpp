#include<iostream>
using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
        // she is aware that she may still have done this at most once.
        int count=1;
        for(int i=0;i<word.length()-1;i++)
        {
            if(word[i]==word[i+1])
            {
                count++;
            }
        }
    return count;   
    }
};


