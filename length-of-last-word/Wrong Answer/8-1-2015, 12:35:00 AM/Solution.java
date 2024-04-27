// https://leetcode.com/problems/length-of-last-word

public class Solution {
    public int lengthOfLastWord(String s) {
        if(s==null && s.length() == 0){
            return 0;
        }
        int len = s.length();
        boolean flag = false;
        int result=0;
        for(int i = len-1; i > 0; i--){
            char c = s.charAt(i);
            if((c <= 'z' && c >='a') || (c <='Z' && c >= 'A')){
                flag = true;
                result++;
            }else{
                if(flag){
                    return result;
                }
            }
        }
        return result;
    }
}