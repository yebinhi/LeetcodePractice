// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int len=nums.size();
        vector<string> res;
        if(len<=0) {
            res.push_back(getString(lower, upper));
            return res;
        }
        int prev =lower-1;
        for(int i=0; i<=len; i++){
            int curr = (i==len) ? upper+1 : nums[i];
            if((curr-prev)>=2){
                res.push_back(getString(prev+1, curr-1));
            }
            prev=nums[i];
        }
        return res;
    }
    
    string getString(int p, int q){
        return (p == q)?to_string(p):to_string(p)+"->"+to_string(q);
        
    }
};