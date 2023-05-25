class Solution:
    def myAtoi(self, s: str) -> int:
        nums = '0123456789'
        num='0'
        signs = '+-'
        sign = ''
        numFound = False
        signFound = False
        for ele in s:
            if (ele in nums) and (ele not in signs):
                numFound = True
                signFound = True
                num+=ele
            elif numFound and ele not in nums:
                break
            elif numFound == False and signFound == False and ('a'<=ele.lower()<='z' or ele =='.'):
                break
            elif ele in signs and signFound == False:
                signFound = True
                sign += ele
            elif (signFound or numFound) and ele not in nums:
                break
            # print(sign, num)
        s = sign + num
        if int(s)< -2147483648:
            return -2147483648
        elif int(s)> 2147483647:
            return 2147483647
        else:
            return int(s)

a = Solution()
print(a.myAtoi('+-12'))