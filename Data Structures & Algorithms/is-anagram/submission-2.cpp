class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())
            return false;

        for(char ch : s)
        {
            bool found = false;

            for(int i = 0; i < t.size(); i++)
            {
                if(t[i] == ch)
                {
                    t[i] = '#';   // mark used
                    found = true;
                    break;
                }
            }

            if(!found)
                return false;
        }

        return true;
    }
};