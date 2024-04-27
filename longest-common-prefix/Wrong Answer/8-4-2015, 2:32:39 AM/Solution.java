// https://leetcode.com/problems/longest-common-prefix

public class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs==null){
            return null;
        }
        if(strs.length == 0){
            return "";
        }
        if(strs.length == 1){
            return strs[0];
        }
        
        StringBuilder sb = new StringBuilder(strs[0]);
        for(int i =1; i < strs.length; i++){
            int len1 = sb.length();
            int len2 = strs[i].length();
            for(int j =0; j < Math.min(len1, len2); j++){
                if(sb.charAt(j) != strs[i].charAt(j)){
                    sb.delete(j+1, len1+1);
                    break;
                }else if (j == (Math.min(len1, len2)-1)){
                    sb.delete(j+1, len1+1);
                    break;
                }
            }
        }
        return sb.toString();
    }
}