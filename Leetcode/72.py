class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        replaceAble = 0
        w1 = list()
        w1[:0] = word1
        w2=list()
        w2[:0] = word2
        arr=list()
        for ele in w1:
            if ele not in w2:
                replaceAble+=1
                arr.append(ele)
        for ele in arr:
            w1.remove(ele)
        for ele in w1:
            if ele not in w2:
                replaceAble+=1
            else:
                idx = w2.index(ele)
                w2 = w2[idx+1:]




        count = 0
        extra = len(word2) - (len(word1)-replaceAble)
        if replaceAble>extra:
            count+=extra
            count+=(replaceAble-count)
        else:
            count+=replaceAble
            count+=(extra-replaceAble)
        return count