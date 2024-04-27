// https://leetcode.com/problems/valid-palindrome

public class Solution {
    public boolean isPalindrome(String s) {
        if(s == ""){
            return true;
        }
        int len = s.length();
        s= s.toLowerCase();
        StringBuilder sb = new StringBuilder();
        for(int i=0; i<len; i++){
            char c = s.charAt(i);
            if(isAlph(c)){
                sb.append(c);
            }
        }
        int lenSb = sb.length();
        int index = lenSb-1;
        for(int i =0; i<lenSb/2; i++){
            if(sb.charAt(i) != sb.charAt(index)){
                return false;
            }
            index--;
        }
        return true;
    }
    public boolean isAlph(char c){
        if(c >= 'a' && c<='z'){
            return true;
        }
        if(c>='0' && c<='9'){
            return true;
        }
        return false;
    }
}