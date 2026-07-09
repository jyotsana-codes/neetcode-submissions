class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> groupanagram;
        for(auto s:strs)
        {
            vector<int> n(26,0);

            for(auto ch:s)
            {
                n[ch-'a']++;
            }
            string key = "";

            for(int x : n)
                key += to_string(x) + "#";
            
            std::cout<<key<<" ";

            groupanagram[key].push_back(s);
           
        }
        vector<vector<string>> ans;
        for(auto &s:groupanagram)
        {
            ans.push_back(s.second);
        }
        return ans;
    }
};
