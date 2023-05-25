class Solution:
    def mySqrt(self, x: int) -> int:
        sq=0
        for i in range(1,x+1):
            if i*i==x:
                sq=i
                break
            elif ((i*i)<x and (((i+1)*(i+1))>x)):
                sq=i
                break
        return sq