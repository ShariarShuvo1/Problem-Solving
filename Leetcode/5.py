class Solution:
    def palindromChecker(s):
        j=len(s)-1
        palindrom=True
        for i in range(len(s)//2):
            if s[i] != s[j]:
                palindrom =False
                break
            j-=1
        return palindrom
    def longestPalindrome(self, s: str) -> str:
        ans = ''
        found = False
        n=len(s)
        for i in range(n-1):
            for j in range(n-1,i,-1):
                found= False
                x=s[i:j+1]
                if s[i] ==s[j]:
                    found =  Solution.palindromChecker(x)
                if found and len(x)>len(ans):
                    ans = x
                    break
                elif len(x)<len(ans) :
                    break
        if found or len(ans)>0:
            return ans
        else:
            return s[0]
