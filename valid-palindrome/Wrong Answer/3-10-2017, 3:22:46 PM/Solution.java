// https://leetcode.com/problems/valid-palindrome

public class Solution {
    public boolean isPalindrome(String s) {
        int size = s.length();
        int st=0, en=size-1;
        while(st<en){
            while(st<en && Character.isLetterOrDigit(s.charAt(st))) st++;
            while(st<en && Character.isLetterOrDigit(s.charAt(en))) en--;
            if(Character.toLowerCase(s.charAt(st)) != Character.toLowerCase(s.charAt(en)) ) {
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
}