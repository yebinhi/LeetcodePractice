// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n= nums.size();
        if(n<=0) return res;
        
        map<int, int> m;
        for(int i=0; i<n ;i++){
            int tmp=target-nums[i];
            if(m.find(nums[i]) != m.end()){
                res.push_back(m[nums[i]]);
                res.push_back(i);
            }else{
                m[tmp]=i;
            }
                
        }
        return res;
    }
};