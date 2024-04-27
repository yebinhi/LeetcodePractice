// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        if(h<=0) return 0;
        int n=needle.size();
        if(n<=0) return 0;
        
        for(int i=0; i<h; i++){
            for(int j=0; j<n; j++){
                if(haystack[i+j] != needle[j]) break;
                if(j==n) return i;
            }
        }
        return -1;
    }
};