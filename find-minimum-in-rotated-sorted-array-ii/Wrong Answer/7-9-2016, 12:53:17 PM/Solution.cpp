// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int s=0, e=n-1;
        while(s<e){
            int m=(s+e)/2;
            if(nums[s]>nums[e])
                s=m+1;
            else if(nums[s]<nums[e])
                e=m;
            else
                s+=1;
        }
        return nums[s];
    }
};