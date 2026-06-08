class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> in;
        for (int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];
            if(in.contains(d)) {
                return {in[d], i};
            }
            in[nums[i]] = i;
        }
        return {};
    }
};
