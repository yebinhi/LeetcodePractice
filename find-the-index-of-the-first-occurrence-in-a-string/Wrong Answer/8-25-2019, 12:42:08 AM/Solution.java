// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
    public int strStr(String haystack, String needle) {
        for(int i=0; ; i++){
            for(int j=0; ; j++){
                if(i+j == haystack.length()) return -1;
                if(j == needle.length()) return j;
                if(haystack.charAt(i+j) != needle.charAt(j)) break;
            }
        }
        
    }
}