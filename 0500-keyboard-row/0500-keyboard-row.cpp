class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {   
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        map<char,int> map1;

        for(char c1:row1)
        {
            map1[c1]=1;
        }
        for(char c2:row2)
        {
            map1[c2]=2;
        }
        for(char c3:row3)
        {
            map1[c3]=3;
        }

        vector<string> ans;

        for(string word:words)
        {   
            string lowerword=word;
            // 1.Task is to convert into lowercase
            for(int i=0;i<lowerword.length();i++)
            {
               lowerword[i]=tolower(lowerword[i]);
            }

            int requiredrow=map1[lowerword[0]];

            bool valid=true;

            for(int i=0;i<lowerword.length();i++)
            {
                if(map1[lowerword[i]]!=requiredrow)
                {
                    valid=false;
                    break;
                }
            }
            if(valid)
            {
                ans.push_back(word);
            }

        }
    return ans;
    }
};