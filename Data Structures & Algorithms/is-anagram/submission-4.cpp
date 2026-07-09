class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())
            return false;
        
        bool found=false;   
        for(char ch : s)
        {
            found = false;

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