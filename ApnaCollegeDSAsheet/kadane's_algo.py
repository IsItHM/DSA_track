# Question link: https://leetcode.com/problems/maximum-subarray/description/

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        current=0
        maxi= float('-inf')
        for num in nums:
            current=current+num
            if(current>maxi):
                maxi=current
            if(current<0):
                current=0
        return maxi