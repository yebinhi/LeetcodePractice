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
        
        StringBuilder sb = new StringBuilder();
        
        for(int i =1; i < strs.length; i++){
            int len1 = strs[0].length();
            int len2 = strs[i].length();
            for(int j =0; j < Math.min(len1, len2); j++){
                char c1 = strs[0].charAt(j);
                char c2 = strs[j].charAt(j);
                if(c1 == c2){
                    sb.append(c1);
                }
            }
        }
        return sb.toString();
    }
}