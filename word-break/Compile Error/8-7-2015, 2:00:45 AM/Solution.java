// https://leetcode.com/problems/word-break

public class Solution {
    public boolean wordBreak(String s, Set<String> wordDict) {
        if(wordDict.isEmpty()){
            return false;
        }
        int len = s.length();
        for(int i = 0; i<len; i++){
            String sub = s.subSequence(0, i).toString();
            if(isWord(sub)){
                return true;
            }
        }
        return false;
    }
    
    public boolean isWord(String ss, Set<String> wordDict){
        if(wordDict.contains(ss)){
           return true; 
        }
        return false;
    }
}