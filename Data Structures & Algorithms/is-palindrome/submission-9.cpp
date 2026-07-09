class Solution {
public:
    bool isPalindrome(string s) 
    {
        
        string cleaned = "";

        for(char ch : s)
        {
            if(isalnum(ch))
                cleaned += tolower(ch);
        }
        cout<<s<<endl;
        int front =0;
        int back=cleaned.size()-1;
        while(front<=back)
        {
            if(cleaned[front]==cleaned[back])
            {
                front++;
                back--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};
