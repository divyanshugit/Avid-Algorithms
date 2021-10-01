class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) > 1:
            s = nums[0]
            a = nums[nums[0]]
            while s != a:
                s = nums[s]
                a = nums[nums[a]]
            a = 0
            while s != a:
                s = nums[s]
                a = nums[a]
            return s   
        