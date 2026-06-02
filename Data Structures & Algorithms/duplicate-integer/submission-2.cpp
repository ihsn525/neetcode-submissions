class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        std::sort(nums.begin(),nums.end());
        for(int i=0;i+1<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};