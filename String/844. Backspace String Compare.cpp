#include<iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            {
                ans.push_back(s[i]);
            }else{
                if(!ans.empty())
                {
                    ans.pop_back();
                }
            }
        }
        string ans2="";
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            {
                ans2.push_back(t[i]);
            }else{
                if(!ans2.empty())
                {
                    ans2.pop_back();
                }
            }
        }
        if(ans==ans2)
        {
            return true;
        }
    return false;
    }
};