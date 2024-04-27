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
                if(a.start == b.start){
                    return b.end-a.end;
                }
                return a.start - b.start;
            }
        });
        ArrayList<Interval> count = new ArrayList<Interval>();
        outer:for(int i = 0; i<intervals.length; i++){
            if(count.size() > 0){
                int len = count.size();
                for(int j =0; j<len; j++){
                    if(intervals[i].start >= count.get(j).end){
                        count.set(j, intervals[i]);
                        continue outer;
                    }
                }
            }
            count.add(intervals[i]);
        }
        return count.size();    
    }
}