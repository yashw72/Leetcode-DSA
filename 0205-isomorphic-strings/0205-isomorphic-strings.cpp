class Solution {
public:
    bool isIsomorphic(string s, string t)  
    { 
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;

        if(s.length() != t.length())
        {
            return false;
        }

        for(int i = 0; i < s.length(); i++)
        {
            char a = s[i];
            char b = t[i];

            // Check: a must always map to the same b
            if(map1.find(a) != map1.end())
            {
                if(map1[a] != b)
                {
                    return false;
                }
            }

            // Check: b cannot already belong to another a
            if(map2.find(b) != map2.end())
            {
                if(map2[b] != a)
                {
                    return false;
                }
            }

            // Store both directions
            map1[a] = b;
            map2[b] = a;
        }

        return true;
    }
};