// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.
class Solution {
public:
    string reverseOnlyLetters(string s)
    {
        int start=0;
        int end=s.length()-1;

        while(start<=end)
        {
        if(!isalpha(s[start]))
        {
            start++;
        }
        else if(!isalpha(s[end]))
        {
            end--;
        }
        else
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        }
    return s; 
    }
};