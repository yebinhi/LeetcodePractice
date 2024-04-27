// https://leetcode.com/problems/strobogrammatic-number

public class Solution {
    public boolean isStrobogrammatic(String num) {
        if(num == null || num.length() == 0){
            return true;
        }
        int start = 0;
        int end = num.length()-1;
        while(start <= end){
            switch(num.charAt(start)){
                case '0':
                case '1':
                case '8':
                    if(num.charAt(start) != num.charAt(end)){
                        return false;
                    }
                    break;
                case '6':
                    if(num.charAt(end) != '9'){
                        return false;
                    }
                    break;
                case '9':
                    if(num.charAt(end) != '6'){
                        return false;
                    }
                    break;
            }
            start++;
            end--;
        }
        return true;
    }
}