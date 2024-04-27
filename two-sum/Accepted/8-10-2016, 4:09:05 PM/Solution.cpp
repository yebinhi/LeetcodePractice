// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int s=nums.size();
        if(s<=0) return res;
        
        unordered_map<int, int> m;
        for(int i=0; i<s; i++){
            if(m.find(nums[i]) != m.end()){
                res.push_back(m[nums[i]]);
                res.push_back(i);
                return res;
            }
            m[target-nums[i]]=i;
        }
        return res;
    }
};