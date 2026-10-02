class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {   
        set<int> number;

        for(int i=0;i<nums.size();i++)
        {
            number.insert(nums[i]);
        }

        int maxcount=0;
        for(int x:number)
        {
            if(number.find(x-1)==number.end())
            {
                int count=1;
                int current=x;

                while(number.find(current+1)!=number.end())
                {
                    count++;
                    current++;
                }
                maxcount=max(maxcount,count);
            }
        }
    return maxcount;
    }
};

    //     sort(nums.begin(),nums.end());

    //     int count=1;
    //     int maxcount=0;
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         if(nums[i+1]==nums[i]+1)
    //         {
    //             count++;
    //         }
    //         maxcount=count;
    //     }
    // return maxcount;
