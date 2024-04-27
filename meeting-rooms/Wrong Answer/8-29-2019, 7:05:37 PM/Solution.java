// https://leetcode.com/problems/meeting-rooms

class Solution {
    public boolean canAttendMeetings(int[][] intervals) {
        
        for(int i=0; i<intervals.length; i++){
            
            for(int j=i+1; j<intervals.length; j++){
                int[] temp1 = intervals[i];
                int[] temp2 = intervals[j];
                if(temp2[0] > temp1[1] || temp2[1] < temp1[0]){
                
                }else {
                    return false;
                }
            }
        }
        
        return true;
    }
}