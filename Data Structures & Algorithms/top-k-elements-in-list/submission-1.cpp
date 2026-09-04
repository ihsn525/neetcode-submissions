class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Store pairs as {frequency, number} in a vector
        vector<pair<int, int>> freqPairs;
        for (auto& entry : count) {
            freqPairs.push_back({entry.second, entry.first});
        }

        // Step 3: Sort in descending order (highest frequency first)
        sort(freqPairs.rbegin(), freqPairs.rend());

        // Step 4: Extract the first k numbers
        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(freqPairs[i].second);
        }

        return res;
        
    }
};
