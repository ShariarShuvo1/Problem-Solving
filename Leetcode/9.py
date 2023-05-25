class Solution:
    def isPalindrome(self, x: int) -> bool:
        x=str(x)
        if len(x)<2:
            return True
        else:
            if len(x)%2==0:
                first=x[:len(x)//2]
                second=x[len(x)//2:]
                second= second[::-1]
                if first==second:
                    return True
                else:
                    return False
            else:
                first=x[:len(x)//2]
                second=x[(len(x)//2)+1:]
                second= second[::-1]
                if first==second:
                    return True
                else:
                    return False