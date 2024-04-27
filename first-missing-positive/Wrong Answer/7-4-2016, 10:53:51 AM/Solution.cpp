// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(), prev=NULL;
        if(n<=0) return 1;
        unordered_set<int> s;
        for(int i=0; i<n; i++) s.insert(nums[i]);
        for(auto it = s.begin(); it != s.end(); it++){
            if(prev!=NULL || (*it-prev)>1)
                return prev+1;
            prev=*it;
        }
        return prev>0?prev+1:1;
            
        
    }
};