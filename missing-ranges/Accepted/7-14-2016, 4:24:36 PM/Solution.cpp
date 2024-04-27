// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        int prev=lower-1;
        vector<string> res;
        for(int i=0; i<=n; i++){
            int cur= (i==n) ? upper+1: nums[i];
            if(cur-prev >1) res.push_back(getString(prev, cur));
            prev=cur;
        }
        return res;
    }
    
    string getString(int s, int e){
 
        if(abs(e-s) ==2)
            return to_string(s+1);
        else
            return to_string(s+1)+"->"+to_string(e-1);
    }
};