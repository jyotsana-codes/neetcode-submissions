class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> set;
        for(auto num:nums)
        {
            set.insert(num);
        }
        int maxlongest=0;
        for(auto s:set)
        {
            if(set.count(s-1)==0)
            {
                int longest=1;
                int curr=s;
                while(set.count(curr+1))
                {
                    ++longest;
                    ++curr;
                }
                maxlongest=max(longest, maxlongest);
            }

        }
        return maxlongest;
        
    }
};
