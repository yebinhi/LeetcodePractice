// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int len = nums.size();
        if(len <=0) return res;
        
        map<int, int> mymap;
        for(int i=0; i<len; i++){
            int temp=target-nums[i];
            if(mymap.find(nums[i]) != mymap.end()){
                res.push_back(mymap[nums[i]]);
                res.push_back(i);
            }else{
                mymap[temp]=i;
            }
        }
        return res;
    }
};