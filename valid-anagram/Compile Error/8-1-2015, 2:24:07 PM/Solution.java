// https://leetcode.com/problems/valid-anagram

public class Solution {
    public boolean isAnagram(String s, String t) {
        if(s == null || t == null){
            return false;
        }
        char[] s1 = s.toCharArray();
        char[] s2 = s.toCharArray();
        return Array.equals(s1, s2);
    }
}