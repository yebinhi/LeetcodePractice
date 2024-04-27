// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), maxN=0, curr=0;
        if(n<=0) return 0;
        int prev=INT_MIN;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            if(prev==INT_MIN || abs(nums[i]-prev)<=1)
                curr++;
            else
                curr=1;
                
            maxN=max(maxN, curr);
            prev=nums[i];
        }
        return maxN;
    }
};