// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
        in n=nums.size();
        if(n<=0) return 0;
        
        int s=0, e=n-1;
        while(s<e && nums[s]>=nums[e]){
            int m=(s+e)/2;
            if(nums[m]>nums[e]){
                s=m+1;
            }else if(nums[m] < nums[s]){
                e=m;
            }else{
                s+=1;
            }
        }
        return nums[s];
    }
};