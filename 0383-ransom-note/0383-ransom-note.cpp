class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;

        for(int i=0;i<ransomNote.length();i++)
        {
            map1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            map2[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.length();i++)
        {
            char a=ransomNote[i];

            if(map2[a]==0)
            {
                return false;
            }

            map2[a]--;
        }

    return true;
    }
};