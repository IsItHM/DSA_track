# https://leetcode.com/problems/container-with-most-water/description/
class Solution:
    def maxArea(self, height: List[int]) -> int:
        lp=0
        rp=len(height)-1
        maximum=0
        for h in height:
            current= (rp-lp)*min(height[lp],height[rp])
            maximum=max(maximum,current)
            if lp<rp :
                lp=lp+1
            else:
                rp=rp-1
        return maximum