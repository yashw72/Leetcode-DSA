class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> Freq;

        for(int i=0;i<nums.size();i++)
        {
            Freq[nums[i]]++;
        } 

        vector<int> ans;

        for(auto x:nums)
        {
            if(Freq.find(x)!=Freq.end())
            {
                if(Freq[x]==1)
                {
                    ans.push_back(x);
                }
            }
        }
    return ans;
    }
};