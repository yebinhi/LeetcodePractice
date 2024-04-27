// https://leetcode.com/problems/valid-number

class Solution {
    public boolean isNumber(String s) {
        int i=0, n=s.length();
        
        while(i<n && s.charAt(i)== ' ') i++;
        
        if(i<n && (s.charAt(i) == '+' || s.charAt(i)== '-')) i++;
        
        while(i<n && Character.isDigit(s.charAt(i))) i++;
        
        if(i<n && (s.charAt(i) == '.' || s.charAt(i) == 'e')) i++;
        
        while(i<n && Character.isDigit(s.charAt(i))) i++;
        
        while(i<n && s.charAt(i)== ' ') i++;
        
        return i == n ? true : false;
        
    }
}