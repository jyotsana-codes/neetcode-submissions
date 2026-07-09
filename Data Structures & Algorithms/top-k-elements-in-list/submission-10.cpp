class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>> >  minheap;
        for(auto h:mp)
        {
           
            minheap.push({h.second, h.first});
            if(minheap.size()>k)
                minheap.pop();
        }
        vector<int> ans;
        /*for(int i=0; i<k; i++)
        {
            ans.push_back(minheap.top().second);
        }*/
        while(!minheap.empty())
        {
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
        
    }
};
