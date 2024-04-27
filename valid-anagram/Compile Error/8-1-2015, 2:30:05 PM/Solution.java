// https://leetcode.com/problems/valid-anagram

import java.util.Array;
public class Solution {
    public boolean isAnagram(String s, String t) {
        if(s == null || t == null){
            return false;
        }
        char[] s1 = s.toCharArray();
        char[] s2 = s.toCharArray();
        Arrays.sort(s1);
        Arrays.sort(S2);
        return Arrays.equals(s1, s2);
    }
}