// https://leetcode.com/problems/two-sum

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        data={}
        for i in range(len(nums)):
            if data.containKey(nums[i]):
                return (i, nums[i])
            data[target-nums[i]]=i
        return []