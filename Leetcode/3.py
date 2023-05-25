class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        count =0
        for i in range(len(s)):
            x=''
            for j in range(i,len(s)):
                if s[j] not in x:
                    x+=s[j]
                elif s[j] in x:
                    break
            if len(x)>=count:
                count = len(x)
        return count