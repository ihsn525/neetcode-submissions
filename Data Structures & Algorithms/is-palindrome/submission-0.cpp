class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char c : s)
        {
            if(isalnum(c))
            {
                cleaned+=tolower(c);
            }
        }
        string rev=cleaned;
        reverse(cleaned.begin(),cleaned.end());
        return cleaned==rev;
    }
};
