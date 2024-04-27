// https://leetcode.com/problems/meeting-rooms

class Solution {
    public boolean canAttendMeetings(int[][] intervals) {
        
        for(int i=0; i<intervals.length; i++){
            
            for(int j=i+1; j<intervals.length; j++){
                int[] temp = intervals[i];
                int[] temp2 = intervals[j];
                if(temp[1]>=temp2[0] || temp[0] <= temp2[1]){
                return false;
                }
            }
        }
        
        return true;
    }
}