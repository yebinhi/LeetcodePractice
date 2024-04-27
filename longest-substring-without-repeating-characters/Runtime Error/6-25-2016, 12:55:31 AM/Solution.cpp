// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(), j=0, maxLen=0;
        if(n<=0) return 0;
        
        int count[32];
        for(int i=0; i<n; i++){
            if(count[s[i]]>0){
               j++;
               maxLen=max(i-j+1, maxLen);
            }
            count[s[i]]=i;
        }
        return maxLen;
    }
};