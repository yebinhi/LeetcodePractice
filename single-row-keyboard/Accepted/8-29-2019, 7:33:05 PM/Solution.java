// https://leetcode.com/problems/single-row-keyboard

class Solution {
    public int calculateTime(String keyboard, String word) {
        
        int location=0, len=word.length(), index=0, time=0;
        while(index<len){
            char temp = word.charAt(index);
            int end = getKeyLocation(keyboard, temp);
            time = time+Math.abs(end-location);
            location = end;
            index++;
        }
        return time;
    }
    private int getKeyLocation(String keyboard, char a){
        for(int i=0; i<keyboard.length(); i++){
            if(keyboard.charAt(i) == a){
                return i;
            }
        }
        return 0;
    }
}