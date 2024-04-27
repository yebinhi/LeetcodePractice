// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j, m=haystack.size(), n=needle.size();
        if(n == 0) return 0;
        for(i=0; i<=m-n; i++){
            for(j=0; j<n; i++){
                if(haystack[i+j] != needle[j]) break;
                
            }
            if(j==(n-1)) return i;
            
            
        }
        return -1;
    }
};