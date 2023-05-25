class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lst=s.split()
        word=lst[len(lst)-1]
        return len(word)