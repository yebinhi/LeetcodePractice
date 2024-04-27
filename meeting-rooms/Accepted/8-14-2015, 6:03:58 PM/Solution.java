// https://leetcode.com/problems/meeting-rooms

/**
 * Definition for an interval.
 * public class Interval {
 *     int start;
 *     int end;
 *     Interval() { start = 0; end = 0; }
 *     Interval(int s, int e) { start = s; end = e; }
 * }
 */
public class Solution {
    public boolean canAttendMeetings(Interval[] intervals) {
         if (intervals == null)
             return false;
    
        Arrays.sort(intervals, new Comparator<Interval>(){
            public int compare(Interval a, Interval b){
                if(a.start == b.start){
                    return 0;
                }
                return a.start > b.start ? 1 : -1;
            }
        });
 
 
         for(int i =1; i<intervals.length;i++){
             if(intervals[i-1].end > intervals[i].start){
                 return false;
             }
         }
         return true;
         
    }
}