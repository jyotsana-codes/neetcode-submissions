class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> groupanagram;

        for(auto s:strs)
        {
            string temp;
            temp=s;
            sort(temp.begin(), temp.end());
            groupanagram[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto s:groupanagram)
        {
            ans.push_back(s.second);
        }
        return ans;
    }    
};
