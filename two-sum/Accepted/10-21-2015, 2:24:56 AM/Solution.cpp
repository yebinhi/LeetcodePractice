// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) {
                res.push_back(hash[target - nums[i]]), res.push_back(i + 1);
                return res;
            }
        hash[nums[i]] = i + 1;
        }
        
    }
};