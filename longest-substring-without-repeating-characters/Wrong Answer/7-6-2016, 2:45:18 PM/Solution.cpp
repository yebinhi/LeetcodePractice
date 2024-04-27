// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=0) return 0;
        int maxL=0;
        map<int, int> m;
        for(int i=0; i<n; i++){
            if(m.find(s[i]) != m.end()){
                maxL=max(maxL, i-s[i]);
            }
            m[s[i]]=i;
        }
        return maxL;
    }
};