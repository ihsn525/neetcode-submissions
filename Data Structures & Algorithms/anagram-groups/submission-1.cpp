class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            std::sort(s.begin(),s.end());
            res[s].push_back(strs[i]);
        }

        vector<vector<string>> anagramsarr;
        for(auto const& [key,val] : res)
        {
            anagramsarr.push_back(val);
        }

        return anagramsarr;
    }
};
