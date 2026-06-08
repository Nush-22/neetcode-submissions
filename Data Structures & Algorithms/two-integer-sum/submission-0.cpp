class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> in;
        for (int i = 0; i < n; i++) {
            in[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if(in.count(diff) && in[diff] != i) {
                return {i, in[diff]};
            }   
        }
        return {};
    }
};
