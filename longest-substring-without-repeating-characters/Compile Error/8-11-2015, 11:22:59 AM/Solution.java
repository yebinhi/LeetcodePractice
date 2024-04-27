// https://leetcode.com/problems/longest-substring-without-repeating-characters

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s == null || s.length() == 0){
            return 0;
        }
        boolean exist[] = new boolean[256];
        int j = 0, maxLen = 0;
        for(int i = 0; i<s.length(); i++){
            while(exist[s.charAt(i)]){
                exist[j] = false;
                j++;
            }
            exist[s.charAt(j)] =true;
            Math.max(maxlen, i-j+1);
        }
        return maxLen;
    }
}