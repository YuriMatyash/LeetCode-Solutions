# Third solution
class Solution:
    def findKDistantIndices(self, nums: list[int], key: int, k: int) -> list[int]:
        result = []
        highest = 0

        for j in range(len(nums)):
            if nums[j] == key:
                left = max(0, j-k, highest)
                right = min(len(nums), j+k+1)
                highest = right
                for i in range(left,right):
                    result.append(i)
        
        return  result

# Second solution
'''
class Solution:
    def findKDistantIndices(self, nums: list[int], key: int, k: int) -> list[int]:
        resultSet = set()

        for j in range(len(nums)):
            if nums[j] == key:
                left = max(0, j-k)
                right = min(len(nums), j+k+1)

                for i in range(left,right):
                    resultSet.add(i)
        
        result = list(resultSet)
        return  result
'''

# First solution
'''
class Solution:
    def findKDistantIndices(self, nums: list[int], key: int, k: int) -> list[int]:
        resultSet = set()

        for j in range(len(nums)):
            if nums[j] == key:
                left = max(0, j-k)
                right = min(len(nums), j+k+1)

                for i in range(left,right):
                    if (abs(i-j) <= k):
                        resultSet.add(i)
        
        result = list(resultSet)
        return  result
'''
