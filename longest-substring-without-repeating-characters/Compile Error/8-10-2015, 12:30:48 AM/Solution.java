// https://leetcode.com/problems/longest-substring-without-repeating-characters

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        boolean[] exist = new boolean[256];
        int len = s.length();
        int i =0, maxLen=0;
        for(int j =0; j < len; j++){
            while(exist[s.charAt(j)]){
                exist[s.charAt(i)] = false;
                i++;
            }
            exist[s.charAt(j)] = true;
            maxLen = Math.max(maxLen, j-i+1);
        }
        
    }
}