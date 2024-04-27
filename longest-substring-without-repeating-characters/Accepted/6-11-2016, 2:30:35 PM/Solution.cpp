// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        if(len<=0) return 0;
        vector<int> count(256,-1);
        int start=0, maxlen=0;
        for(int i=0; i<len; i++){
            
            if(count[s[i]]>=start){
                maxlen=max(maxlen, i-start);
                start=count[s[i]]+1;
            }
                count[s[i]]=i;
        }
        return max(maxlen, len-start);
    }
};