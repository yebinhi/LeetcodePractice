// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size(), n=needle.size();
        if(n == 0) return 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; i++){
                if(haystack[m+n] != needle[n]) break;
                if(n==j) return i; 
            }
            
        }
        return -1;
    }
};