// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<Integer, Integer> mapp = HashMap<>();
        for(int i=0; i<nums.size(); i++){
            int x = nums[i]
            if(mapp.containKey(target-x)){
                return new Vector<int>{mapp.get(target-x)+1, i+1};
            }
            mapp.put(x,i)
    }
};