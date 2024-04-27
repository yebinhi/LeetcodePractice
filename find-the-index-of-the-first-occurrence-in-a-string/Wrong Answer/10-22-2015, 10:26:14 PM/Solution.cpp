// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h(haystack.size()), n(needle.size()), tmp(0);
        if(h<n) return -1;
        if(n==0) return 0;
        if(h==0) return -1;
        for(int i=0; i<h; i++){
            tmp = i;
            for(int j=0; j<n; j++){
                
                if(haystack[tmp+j] != needle[j]){
                    return -1;
                }
                if(j == n-1) return tmp;
            }
        }
        
    }
};