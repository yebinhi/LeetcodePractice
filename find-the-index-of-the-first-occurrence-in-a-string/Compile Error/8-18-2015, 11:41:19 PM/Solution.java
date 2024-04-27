// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

public class Solution {
    public int strStr(String haystack, String needle) {
        if(haystack == null || needle == null){
            return 0;
        }
        int h = haystack.length();
        int n = needle.length();
        if(h<n){
            return -1;
        }
        if(n == 0){
            return 0;
        }
        int i =0;
        int next[] = generateNext(needle);
        while(i< h-n){
            int success=1;
            for(int j =0; j < n; j++){
                if(needle.charAt(0) != haystack.charAt(i)){
                    success =0;
                    i++;
                    break;
                }else if(needle.charAt(j) != haystack.charAt(i)){
                    success =0;
                    i=i+j-next[j-1];
                    break;
                }
            }
            if(sucess == 1){
                return i;
            }
        }
        return -1;
        
        
    }
    
    private int[] generateNext(String needle){
        int len = needle.length();
        int next[] = new int[len];
        next[0]=0;
        int j=0;
        for(int i =1; i<len; i++){
            if(needle.charAt(j) == needle.charAt(i)){
                next[i]=next[i-1]+1;
                j++;
            }else{
                next[i]=0;
                j=0;
            }
        }
    }
}