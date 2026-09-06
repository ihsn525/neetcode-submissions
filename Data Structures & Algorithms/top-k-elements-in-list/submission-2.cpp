class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;

        for(int num:nums)
        {
            count[num]++;
        }

        vector<pair<int, int>> freqPairs;

        for(auto& entry:count)
        {
            freqPairs.push_back({entry.second,entry.first});
        }

        sort(freqPairs.rbegin(),freqPairs.rend());

        vector<int> res;

        for(int i=0;i<k;i++)
        {
            res.push_back(freqPairs[i].second);
        }

        return res;
    }
};
