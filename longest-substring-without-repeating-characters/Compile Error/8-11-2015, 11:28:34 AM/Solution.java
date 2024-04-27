// https://leetcode.com/problems/longest-substring-without-repeating-characters

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s == null || s.length() == 0){
            return 0;
        }
        int map[] = new int[256];
        Array.fill(map, -1);
        int j = 0, maxLen = 0;
        for(int i = 0; i<s.length(); i++){
            if(map(s.charAt(i))== -1){
                j = map[s.charAt(i)]+1;
            }
            map[s.charAt(i)] == i;
            maxLen = Math.max(maxLen, i-j+1);
        }
        return maxLen;
    }
}