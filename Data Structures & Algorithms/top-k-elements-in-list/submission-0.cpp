class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for(int num: nums) counts[num]++;

        vector<int> result;
        for(auto const& [num, freq] : counts) {
            result.push_back(num);
        }

        sort(result.begin(),result.end(), [&](int a, int b) {
            return counts[a]>counts[b];
        });

        result.resize(k);
        return result;
        
    }
};
