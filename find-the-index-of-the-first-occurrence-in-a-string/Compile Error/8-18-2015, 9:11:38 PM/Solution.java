// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

public class Solution {
    public int strStr(String haystack, String needle) {
        if(haystack == null || needle == null){
            return 0;
        }
        if(needle.length() == 0){
            return 0;
        }
        
        for(int i = 0; i < haystack.length(); i++){
            if(needle.length() > haystack.length()-i){
                return -1;
            }
            int m = i;
            for(int j =0; j<needle.length(); j++){
                if(haystack.chatAt(m) == needle.charAt(j)){
                    m++;
                }else{
                    break;
                }
                if(j == needle.length()-1){
                    return i;
                }
            }
        }
        return -1;
    }
}