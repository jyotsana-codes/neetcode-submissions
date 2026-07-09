class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> mp;

        for(auto n:nums)
        {
            mp[n]++;
        }

        for(auto [key, val]:mp)
        {
            if(val>1)
            {
                return true;
            }
        }
        return false;
        
    }
};