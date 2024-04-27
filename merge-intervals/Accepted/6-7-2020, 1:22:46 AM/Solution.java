// https://leetcode.com/problems/merge-intervals

class Solution {
    public int[][] merge(int[][] intervals) {
        int len = intervals.length;
        if(len<=1) return intervals;
        
        Arrays.sort(intervals, (a,b)->a[0]-b[0]);
        LinkedList<int[]> res = new LinkedList<>();
        
        for(int[] interval: intervals){
            if(res.isEmpty() || res.getLast()[1] < interval[0]){
                res.add(interval);
            }else{
                res.getLast()[1] = Math.max(res.getLast()[1], interval[1]);
            }
        }
        
        return res.toArray(new int[res.size()][]);
        
    }
}