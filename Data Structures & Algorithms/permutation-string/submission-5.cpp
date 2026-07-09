class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size()>s2.size())
            return false;
        
        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);
        for(char c : s1)
            s1Count[c - 'a']++;

        int k = s1.size();

        for(int i = 0; i < k; i++)
            windowCount[s2[i] - 'a']++;

        if(s1Count == windowCount)
            return true;

        for(int i = k; i < s2.size(); i++)
        {
            windowCount[s2[i] - 'a']++;
            windowCount[s2[i - k] - 'a']--;

            if(s1Count == windowCount)
                return true;
        }

        return false;
    }
};

