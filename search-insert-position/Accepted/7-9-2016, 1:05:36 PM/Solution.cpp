// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int s=0, e=n-1;
        while(s<e){
            int m=(s+e)/2;
            if(nums[m]<target)
                s=m+1;
            else 
                e=m;
        }
        return nums[s]<target? s+1:s; 
    }
};