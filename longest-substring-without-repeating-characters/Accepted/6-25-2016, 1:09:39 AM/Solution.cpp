// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(), j=0, maxLen=0;
        if(n<=0) return 0;
        
        vector<int> count(256, -1);
        for(int i=0; i<n; i++){
            if(count[s[i]]>=j){
                
                j=count[s[i]]+1;
            }
            count[s[i]]=i;
            maxLen=max(maxLen, i-j+1);
        }
        return maxLen;
    }
};