// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res;
        if(n<=0) return res;
        
        map<int, int> m;
        for(int i=0; i<n; i++){
           int temp=target-nums[i];
           if(m.find(nums[i]) != m.end()){
               res.push_back(m[nums[i]]);
               res.push_back(i);
           }
           m[temp]=i;
        }
        return res;
    }
};