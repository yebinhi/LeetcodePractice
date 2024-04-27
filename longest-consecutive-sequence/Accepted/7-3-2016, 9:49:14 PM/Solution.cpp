// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), maxL=0;
        if(n<=0) return 0;
        
        set<int> s;
        for(int i=0; i<n; i++) s.insert(nums[i]);
        
        for(int i=0; i<n; i++){
            if(s.empty()) break;
            int curL=0, curNum=nums[i];
            while(s.count(curNum)){
                s.erase(curNum);
                curL++;
                curNum++;
            }
            curNum=nums[i]-1;
            while(s.count(curNum)){
                s.erase(curNum);
                curL++;
                curNum--;
            }
            maxL=max(maxL, curL);
        }
        return maxL;
    }
};