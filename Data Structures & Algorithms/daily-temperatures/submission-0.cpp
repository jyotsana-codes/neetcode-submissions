class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        stack<pair<int, int>> s;
        vector<int> ans(n,0);
        for(int i=n-1; i>=0; --i)
        {
           while(s.size()>0 && s.top().first<=temperatures[i])
           {
                s.pop();
           }

           if(s.empty())
                ans[i]=0;
            else
                ans[i]=s.top().second-i; 

            s.push({temperatures[i], i});
        }
        return ans;
        
    }
};