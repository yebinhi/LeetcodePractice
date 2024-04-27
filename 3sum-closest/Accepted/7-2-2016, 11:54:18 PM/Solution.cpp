// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<3) return INT_MAX;
        sort(nums.begin(), nums.end());
        int minDiff= INT_MAX;
        for(int i=0; i<n-2; i++){
            int left =i+1, right=n-1;
            while(left<right){
                int diff = nums[i] + nums[left] + nums[right]-target;
                if(abs(diff) < abs(minDiff)) minDiff = diff;
                if(diff ==0)
                    break;
                else if(diff<0)
                   left++;
                else 
                    right--;
            }
        }
        return target+minDiff;
    }
};