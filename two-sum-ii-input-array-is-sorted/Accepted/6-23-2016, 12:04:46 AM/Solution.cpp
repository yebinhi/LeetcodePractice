// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len=numbers.size();
        vector<int> res;
        if(len<=0) return res;
        
        for(int i=0; i<len; i++){
            int key = target-numbers[i];
            int j = BS(numbers, key, i+1);
            if(j != -1){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
        }
        return res;
    }
    int BS(vector<int>& nums, int key, int start){
        int end= nums.size();
        
        while(start<end){
            int m = (start+end)/2;
            if(nums[m]<key){
                start = m+1;
            }else{
                end=m;
            }
        }
        return nums[start] == key ? start : -1;
    }
};