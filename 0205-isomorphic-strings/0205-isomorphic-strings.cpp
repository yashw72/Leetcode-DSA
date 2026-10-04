class Solution {
public:
    bool isIsomorphic(string s, string t)  
    {   
        // /1.If Length is not same then its not isomorphic
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;

        for(int i=0;i<s.length();i++){   
            char a=s[i];
            char b=t[i];

            if(map1.find(a)!=map1.end()){
                if(map1[a]!=b){
                    return false;
                }
            }
            if(map2.find(b)!=map2.end())
            {
                if(map2[b]!=a)
                {
                    return false;
                }
            }
            map1[a]=b;
            map2[b]=a;
        }
    return true;
    }
};