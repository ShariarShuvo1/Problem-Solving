class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        if int(x)>=0:
            x = x[::-1]
        else:
            a = x[::-1]
            x = '-'+ a[:len(x)-1]
        if int(x)< -2147483648 or int(x)> 2147483647:
            return 0
        else:
            return int(x)