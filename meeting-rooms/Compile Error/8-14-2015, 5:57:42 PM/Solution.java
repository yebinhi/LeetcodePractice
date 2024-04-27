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

          Arrays.sort(intervals, new Comparator(Interval){
              public int compare(Interval i1, Interval i2){
                  if(i1.start == i2.start) return 0;
                  return i1.start > i2.start ? 1:-1;
              }
          });
 
 
         for(int i =1; i<intervals.length;i++){
             if(intervals[i-1].end > intervals[i].start){
                 return false;
             }
         }
         return ture;
         
    }
}