// https://leetcode.com/problems/meeting-scheduler

class Solution:
    def minAvailableDuration(self, slots1: List[List[int]], slots2: List[List[int]], duration: int) -> List[int]:
        s_sl1 = sorted(slots1, key = lambda x:x[0])
        s_sl2 = sorted(slots2, key = lambda x:x[0])
        
        q1 = deque(s_sl1)
        q2 = deque(s_sl2)
        
        while q1 and q2:
            s1, e1 = q1[0]
            s2, e2 = q2[0]
            if (s := max(s1, s2))+duration <= (e := min(e1, e2)):
                return [s, s+duration]
            if s1 < s2:
                q1.popleft()
            else:
                q2.popleft()
        return []