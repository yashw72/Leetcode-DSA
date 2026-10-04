class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {   
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss >> word)
        {
            words.push_back(word);
        }

        // Pratice Makes man perfect

        if(pattern.length()!=words.size())
        {
            return false;
        }

        unordered_map<char,string> map1;
        unordered_map<string,char> map2;

        for(int i=0;i<words.size();i++)
        {
            char letter=pattern[i];
            string wordd=words[i];

            if(map1.find(letter)!=map1.end())
            {
                if(map1[letter]!=wordd)
                {
                    return false;
                }
            }   

            if(map2.find(wordd)!=map2.end())
            {
                if(map2[wordd]!=letter)
                {
                    return false;
                }
            }    

            map1[letter]=wordd;
            map2[wordd]=letter;  
        }

        return true;

        // if(pattern.length()!=words.size())
        // {
        //     return false;
        // }

        // unordered_map<char,string> chartoword;
        // unordered_map<string,char> wordtochar;

        // for(int i=0;i<pattern.length();i++)
        // {   
        //     char letter=pattern[i];
        //     string wordd=words[i];

        //     if(chartoword.find(letter)!=chartoword.end())
        //     {
        //         if(chartoword[letter]!=wordd)
        //         {
        //             return false;
        //         }
        //     }

        //     if(wordtochar.find(wordd)!=wordtochar.end())
        //     {
        //         if(wordtochar[wordd]!=letter)
        //         {
        //             return false;
        //         }
        //     }

        //     chartoword[letter]=wordd;
        //     wordtochar[wordd]=letter;
        // }
        // return true;


    }
};