// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<string> res;
        if(n<=0){
            res.push_back(to_string(lower)+"->"+to_string(upper));
        }
        
        int prev=lower-1;
        for(int i=0; i<=n; i++){
            int cur= (i==n)? upper+1 : nums[i];
            if(cur-prev >= 2) res.push_back(getString(prev, cur));
            prev=cur;
        }
        return res;
    }
    
    string getString(int l, int u){
        return (u-l==2) ? to_string(l+1) : (to_string(l+1)+"->"+ to_string(u-1));
    }
};