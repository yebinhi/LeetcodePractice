// https://leetcode.com/problems/missing-ranges

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<string> res;
        if(n<=0){
            res.push_back(to_string(lower)+"->"+to_string(upper));
        }
        
        int prev=lower-1, i=0;
        while(i<=n){
            int curr=(i==n)? upper+1 : nums[i];
            if(curr-prev >1) res.push_back(getString(prev+1, curr-1));
            prev=curr;
            i++;
        }
        return res;
    }
    
    string getString(int v1, int v2){
        return (v2-v1==0)? to_string(v1) : (to_string(v1)+"->"+to_string(v2));
    }
};