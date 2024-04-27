// https://leetcode.com/problems/two-sum

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        data={}
        for i in range(len(nums)):
            if nums[i] in data:
                return (i, data[nums[i]])
            data[target-nums[i]]=i
        return ()