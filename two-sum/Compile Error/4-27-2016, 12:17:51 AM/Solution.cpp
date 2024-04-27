// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        Map<Integer, Integer> map = HashMap<>();
        for(int i=0; i<nums.size(); i++){
            int x = nums[i]
            if(map.containKey(target-x)){
                return new Vector<int>{map.get(target-x)+1, i+1};
            }
            map.put(x,i)
    }
};