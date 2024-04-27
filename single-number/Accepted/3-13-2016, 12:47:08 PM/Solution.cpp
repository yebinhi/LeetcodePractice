// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int thenum =0;
        for(int i=0; i<nums.size(); i++){
            thenum^=nums[i];
        }
        return thenum;
    }
};