// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> myset;
        int size=nums.length();
        for(int i=0; i<nums.size(); i++){
            if(myset.find(nums[i]) == myset.end()){
                myset.insert(nums[i]);
            }else{
                myset.erase(nums[i]);
            }
        }
        
        auto it = myset.begin();
        return it;
    }
};