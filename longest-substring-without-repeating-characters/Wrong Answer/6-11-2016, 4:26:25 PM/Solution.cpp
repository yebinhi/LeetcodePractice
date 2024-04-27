// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        if(len<=0) return 0;
        
        int start=0, maxlen=0;
        vector<int> map(256,-1);
        for(int i=0; i<len; i++){
            if(map[s[i]]>=0){
                maxlen=max(maxlen, i-start);
                start++;
            }
            map[s[i]]=i;
        }
        maxlen=max(maxlen, len-start);
        return maxlen;
    }
};