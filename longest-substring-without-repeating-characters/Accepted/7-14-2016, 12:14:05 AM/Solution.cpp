// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=0) return 0;
        vector<int> count(256, -1);
        int maxSum=0, start=0;
        for(int i=0; i<n; i++){
            int index=count[s[i]];
            if(index >= start) start=count[s[i]]+1;
            count[s[i]]=i;
            maxSum=max(maxSum, i-start+1);
        }
        return maxSum;
    }
};