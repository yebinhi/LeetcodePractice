// https://leetcode.com/problems/single-number-ii

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0, twos=0, threes=0;
        for(int i=0; i<nums.size(); i++){
            twos=twos|(ones&nums[i]);
            ones=ones^nums[i];
            threes=ones & twos;
            ones=ones & (~threes);
            twos=twos & (~threes);
        }
        return ones;
    }
};