# Question Link: https://leetcode.com/problems/powx-n/description/

class Solution:
    def myPow(self, x: float, n: int) -> float:
        ans=1
        m=n
        n=abs(n)
        while(n>0):
            if(n%2==1):
                n=n-1
                ans=ans*x
            else:
                n=n/2
                x=x*x
        
        if(m<0):
            return 1.0/ans
        else:
            return ans