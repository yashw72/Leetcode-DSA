#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        // 1.OPTIMAL APPROCH
        int left=0;
        int right=0;
        int maxfreq=0;
        int maxlength=0;
        int hash[26]={0};

        while(right<s.size())
        {
            hash[s[right]-'A']++;
            maxfreq=max(maxfreq,hash[s[right]-'A']);

            while((right-left+1)-maxfreq>k)
            {
                hash[s[left]-'A']--;
                maxfreq=0;
                for(int i=0;i<26;i++)
                {
                    maxfreq=max(maxfreq,hash[i]);
                }
                left=left+1;
            }
            if((right-left+1)-maxfreq<=k)
            {
                maxlength=max(maxlength,right-left+1);
                right++;
            }


        }
    return maxlength;   
    }
};