// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<string> res;
        if(n<=0) {
            res.push_back(getString(lower, upper));
            return res;
        }
        
        
        int prev=lower-1;
        for(int i=0; i<=n; i++){
            int curr = (i==n) ? upper+1 : nums[i];
            if(curr-prev >=2) res.push_back(getString(prev+1, curr-1));
            prev=curr;
        }
        return res;
        
    }
    
    string getString(int val1, int val2){
        return (val1==val2) ? to_string(val1) : to_string(val1)+"->"+to_string(val2);
    }
};