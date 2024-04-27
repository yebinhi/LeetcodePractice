// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> ht;
        for(int i=0; i<nums.size(); i++) ht.insert(nums[i]);
        int maxL=1;
        for(int i=0; i<nums.size(); i++){
            if(ht.empty()) break;
            int curlen=0;
            int curNum=nums[i];
            
            while(ht.count(curNum)){
                ht.erase(curNum);
                curlen++;
                curNum++;
            }
            
            curNum=nums[i]-1;
            while(ht.count(curNum)){
                ht.erase(curNum);
                curlen++;
                curNum--;
            }
            maxL=max(maxL, curlen);
        }
        return maxL;
    }
};