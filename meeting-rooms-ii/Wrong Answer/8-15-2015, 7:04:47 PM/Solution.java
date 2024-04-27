// https://leetcode.com/problems/meeting-rooms-ii

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
    public int minMeetingRooms(Interval[] intervals) {
        if(intervals == null || intervals.length == 0){
            return 0;
        }
        
        Arrays.sort(intervals, new Comparator<Interval>(){
            public int compare(Interval a, Interval b){
                return a.start - b.start;
            }
        });
        int count=1;
        for(int i = 1; i<intervals.length; i++){
            if(intervals[i-1].end > intervals[i].start){
                count++;
            }
        }
        return count;    
    }
}