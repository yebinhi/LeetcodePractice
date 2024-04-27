// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h(haystack.size()), n(needle.size());
        if(h<n) return -1;
        if(n==0) return 0;
        if(h==0) return -1;
        for(int i=0; i<h; i++){
            for(int j=0; j<n; j++){
                if((h-i)<(n-j)) return -1;
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == (n-1)) return i;
            }
        }
        return -1;
        
    }
};