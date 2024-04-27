// https://leetcode.com/problems/meeting-rooms

class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        sorted_intervals = sorted(intervals, key= lambda x:x[0])
        prev_end = sorted_intervals[0][1]
        for iv in sorted_intervals[1:]:
            if iv[0] <= prev_end:
                return False
            prev_end = iv[1]
        return True
        