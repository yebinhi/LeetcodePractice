// https://leetcode.com/problems/meeting-rooms-ii

class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        if not intervals:
            return 0
        
        sorted_intervals = sorted(intervals, key = lambda x:x[0])
        free_rooms = []
        heappush(free_rooms, sorted_intervals[0][1])
        
        for meeting in sorted_intervals[1:]:
            if(free_rooms[0] < meeting[0]):
                heappop(free_rooms)
            heappush(free_rooms, meeting[1])
            
        return len(free_rooms)
        