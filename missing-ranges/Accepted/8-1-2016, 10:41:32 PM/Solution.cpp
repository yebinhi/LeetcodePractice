// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        int n=nums.size();
        if(n<=0){
            res.push_back(getString(upper, lower));
            return res;
        }
        int prev=lower-1;
        for(int i=0; i<=n; i++){
            int cur = (i==n)? upper+1 : nums[i];
            if(cur-prev>=2) res.push_back(getString(cur-1, prev+1));
            prev=cur;
        }
        return res;
    }
    string getString(int cur, int prev){
        return (cur==prev) ? to_string(prev) : (to_string(prev)+"->"+to_string(cur));
    }
};