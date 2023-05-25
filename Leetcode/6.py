class Solution:
    def convert(self, s: str, numRows: int) -> str:
        new = ''
        x = numRows+ (numRows -2)
        # print(x)
        if numRows ==1:
            return s
        else:
            for i in range(numRows):
                if i==0 or i==numRows-1:
                    for j in range(i,len(s),x):
                        new += s[j]
                elif i%2==1:
                    for j in range(i,len(s),x):
                        try:
                            new += f'{s[j]}{s[j+(x-2)]}'
                        except:
                            new += f'{s[j]}'
                else:
                    for j in range(i,len(s),x):
                        # print(j)
                        try:
                            new+=f'{s[j]}{s[j+(x-4)]}'
                        except:
                            new+=f'{s[j]}'
                # print(new)
            return new


obj = Solution()
ans = obj.convert('ABCDE',5)
print(ans)