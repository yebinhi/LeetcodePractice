// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int h=haystack.size();
        if(n>h) return -1;
        for(int i=0; i<=h-n; i++){
            for(int j=0; j<=n; j++){
                if(haystack[i+j] != needle[j]) break;
                if(j==n) return i;
            }
        }
        return -1;
    }
};