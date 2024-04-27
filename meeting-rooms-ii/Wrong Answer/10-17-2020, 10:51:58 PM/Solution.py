// https://leetcode.com/problems/meeting-rooms-ii

class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        free_rooms = []
        
        if not intervals:
            return 0
        
        sorted_intervals = sorted(intervals, key = lambda x:x[0])
        
        heapq.heappush(free_rooms, sorted_intervals[0][1])
        
        for iv in sorted_intervals[1:]:
            if(free_rooms[0] < iv[0]):
                heapq.heappop(free_rooms)
            
            heapq.heappush(free_rooms, iv[1])
            
        return len(free_rooms)
            
        
        