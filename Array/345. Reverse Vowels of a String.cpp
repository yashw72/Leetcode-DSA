
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) 
    {
        int n = s.length();
        int start = 0;
        int end = n - 1;

        while(start < end)
        {
            // if start is not vowel
            if(!(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u' ||
                 s[start]=='A' || s[start]=='E' || s[start]=='I' || s[start]=='O' || s[start]=='U'))
            {
                start++;
            }
            // if end is not vowel
            else if(!(s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u' ||
                      s[end]=='A' || s[end]=='E' || s[end]=='I' || s[end]=='O' || s[end]=='U'))
            {
                end--;
            }
            // both are vowels
            else
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};