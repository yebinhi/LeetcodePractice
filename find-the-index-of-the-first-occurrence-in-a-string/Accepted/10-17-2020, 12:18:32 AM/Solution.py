// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        h, n = len(haystack), len(needle)
        if n == 0:
            return 0
        for start in range(h-n+1):
            if haystack[start:start+n] == needle:
                return start
        
        return -1