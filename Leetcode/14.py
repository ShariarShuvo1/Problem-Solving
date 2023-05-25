# strs = ["flower","flow","flight"]
class Solution:
    def longestCommonPrefix(self, strs):
        prfx=''
        strs.sort(key = len)
        word=strs[0]
        for i in range(len(word)):
            temp_word=word[:len(word)-i]
            for element in strs:
                if temp_word == element[:len(temp_word)] and temp_word not in prfx:
                    prfx=temp_word
                elif temp_word != element[:len(temp_word)]:
                    if temp_word in prfx:
                        prfx=''
                    break
        return prfx
