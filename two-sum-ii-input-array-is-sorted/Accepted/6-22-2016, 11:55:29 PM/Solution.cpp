// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int len=numbers.size();
        if(len <= 0) return res;
        
        int i=0, j=len-1;
        while(i<j){
            if((numbers[i]+numbers[j]) > target){
                j--;
            }else if((numbers[i]+numbers[j]) < target){
                i++;
            }else if((numbers[i]+numbers[j]) == target){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
        }
        return res;
    }
};