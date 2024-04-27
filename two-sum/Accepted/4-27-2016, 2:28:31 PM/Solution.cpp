// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        int size = nums.size();
        for(int i=0; i<size; i++){
            if(dict.find(target-nums[i])!= dict.end()){
                return {dict[target-nums[i]],i};
            }
            dict[nums[i]]=i;
        }
        return {-1, -1};
    }
};