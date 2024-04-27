// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), maxN=0, curr=1;
        if(n<=0) return 0;
        int prev=INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]-prev == 1){
                curr++;
            }else{
                maxN=max(maxN, curr);
                curr=1;
            }
        }
        return maxN;
    }
};