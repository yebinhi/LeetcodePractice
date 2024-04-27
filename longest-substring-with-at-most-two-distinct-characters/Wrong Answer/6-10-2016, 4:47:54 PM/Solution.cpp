// https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int len=s.size();
        if(len<0) return 0;
        int i=0, j=-1, maxlen=0;
        
        for(int k=1; k<len; k++){
            if(s[k] == s[k-1]) continue;
            if(s[k] != s[i] && j>0){
                maxlen=max(maxlen, k-i);
                i=j+1;
            }
            j=k-1;
        }
        return max(maxlen, len-i);
    }
};