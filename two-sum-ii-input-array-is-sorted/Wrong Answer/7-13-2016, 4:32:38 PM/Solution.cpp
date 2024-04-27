// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n=numbers.size();
        int s=0, e=n-1;
        while(s<e){
            if(numbers[s]+numbers[e]>target){
                e--;
            }else if(numbers[s]+numbers[e]<target){
                s++;
            }else{
                res.push_back(numbers[s]);
                res.push_back(numbers[e]);
                return res;
            }
        }
        
        return res;
    }
};