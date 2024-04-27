// https://leetcode.com/problems/single-row-keyboard

class Solution {
    public int calculateTime(String keyboard, String word) {
        
        int location=0, len=word.length(), index=0, time=0;
        while(index<len){
            int temp = word.charAt(index);
            int start = temp-'a';
            time = time+Math.abs(start-location);
            location = start;
            index++;
        }
        return time;
    }
}