// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h(haystack.size()-1), n(needle.size()-1), tmp(0);
        for(int i=0; i<=h; i++){
            tmp = i;
            for(int j=0; j<=h; j++){
                if(haystack[tmp+j] != needle[j]){
                    return -1;
                }
            }
        }
        return tmp;
    }
};