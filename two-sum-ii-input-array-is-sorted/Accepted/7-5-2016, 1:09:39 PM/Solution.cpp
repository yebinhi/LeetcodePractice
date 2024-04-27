// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0, e=numbers.size()-1;
        vector<int> res;
        if(e<0) return res;
        
        while(s<e){
            if(numbers[s]+numbers[e] <target) s++;
            if(numbers[s]+numbers[e] >target) e--;
            if(numbers[s]+numbers[e] == target){
                res.push_back(s+1);
                res.push_back(e+1);
                break;
            }
            
        }
        return res;
    }
};