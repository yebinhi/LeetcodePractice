// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s(0), en(nums.size()-1);
        vector<int> result;
        while(s<en){
            if((nums[s]+nums[en]) == target){
                result.push_back(s+1);
                result.push_back(en+1);
                return result;
            }
            if((nums[s]+nums[en]) < target){
                en--;
            }else{
                s++;
            }
            
        }
    }
};