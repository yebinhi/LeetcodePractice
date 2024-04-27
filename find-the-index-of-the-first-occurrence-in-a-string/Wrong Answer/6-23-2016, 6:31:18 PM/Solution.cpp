// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=needle.size(), leh=haystack.size();

        if(len==0) return 0;
        
        for(int i=0; i<=haystack.size()-len; i++){
            for(int j=0; j<len; j++){
                if(haystack[i+j] != needle[j]) break;
                if(j==len-1) return i;
            }
        }
        return -1;
    }
};