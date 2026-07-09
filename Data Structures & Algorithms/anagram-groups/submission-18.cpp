class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> groupanagram;

        for(auto s:strs)
        {
            vector<int> v(26,0);
            for(auto ch:s)
            {
                v[ch-'a']++;
            }
            string key;
            for(auto c:v)
            {
                key+=to_string(c)+"#'";
                //std::cout<<"Key"<<key<<"                       "<<endl;
            }
           
            groupanagram[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto s:groupanagram)
        {
            ans.push_back(s.second);
        }
        return ans;
    }    
};
