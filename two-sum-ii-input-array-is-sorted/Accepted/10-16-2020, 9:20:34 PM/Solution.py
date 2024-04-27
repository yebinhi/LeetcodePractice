// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        front=0
        back=len(numbers)-1
        while front<back:
            n = target - numbers[front]
            if n < numbers[back]:
                back=back-1
            elif n > numbers[back]:
                front=front+1
            elif n == numbers[back]:
                return [front+1, back+1]
            
        