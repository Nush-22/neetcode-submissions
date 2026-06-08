class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> in;
        for (int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];
            if(in.count(d)) {
                return {in[d], i};
            }
            in[nums[i]] = i;
        }
        return {};
    }
};
