class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        vector<pair<int, int>> v;
        for(auto m:mp)
        {
            v.push_back({m.second, m.first});
        }
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};
