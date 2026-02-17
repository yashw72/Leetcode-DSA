// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isvowel(char ch)
    {
        return(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int maxVowels(string s, int k) 
    {
        int n=s.length();
        int count=0;
        int maxcount=0;

        for(int i=0;i<k;i++)
        {
            if(isvowel(s[i]))
            {
                count++;
            }
        }
        maxcount=count;

        for(int i=k;i<n;i++)
        {   
            if(isvowel(s[i-k]))
            {
                count--;
            }
            if(isvowel(s[i]))
            {
                count++;
            }
            maxcount=max(maxcount,count);
        }
    return maxcount;    
    }
};

