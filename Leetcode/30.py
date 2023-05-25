class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        totalSub = len(words)* len(words[0])
        if totalSub>len(s):
            return []
        else:
            arr = list()
            for i in range(len(s)-totalSub+1):
                st = s[i:i+totalSub]
                tempList = list()
                for j in range(0,len(st),len(words[0])):
                    tempList.append(st[j:j+len(words[0])])
                available = True
                tempArr = words.copy()
                for ele in tempList:
                    if ele not in tempArr:
                        available = False
                        break
                    else:
                        tempArr.remove(ele)
                if available:
                    arr.append(i)
            return arr