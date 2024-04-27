// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=0) return 0;
        int maxL=0, start=0;
        vector<int> count(256, -1);
        
        for(int i=0; i<n; i++){
            if(count[s[i]]>=start) start=count[s[i]]+1;
            count[s[i]]=i;
            maxL=max(maxL, i-start+1);
        }
        return maxL;
    }
};