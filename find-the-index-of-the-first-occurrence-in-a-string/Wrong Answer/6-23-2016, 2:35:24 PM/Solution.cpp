// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size(), n=needle.size();
        if(n == 0) return 0;
        for(int i=0; i<=m-n; i++){
            for(int j=0; j<n; i++){
                if(haystack[i+j] != needle[j]) break;
                if(j==n) return i;
            }
            
            
        }
        return -1;
    }
};