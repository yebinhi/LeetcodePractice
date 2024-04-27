// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        if(len<=0) return 0;
        unordered_set<int> myset;
        for(auto x : nums){
            if(myset.find(x) != myset.end()){
                myset.erase(x);
            }else{
                myset.insert(x);
            }
        }
        auto it = myset.begin();
        return *it;
    }
};