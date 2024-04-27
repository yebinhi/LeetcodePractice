// https://leetcode.com/problems/two-sum

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = {}
        for i in range(len(nums)):
            temp = target-nums[i]
            if temp in hashtable:
                return [i, hashtable[temp]]
            hashtable[nums[i]]=i
        return []



        