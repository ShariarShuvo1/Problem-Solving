class Solution:
    def simplifyPath(self, path: str) -> str:
        s='/'
        arr = path.split('/')
        count = 0
        countDot=0
        for ele in arr:
            if ele=='':
                count+=1
            if ele=='.':
                countDot+=1
        for run in range(count):
            arr.remove('')
        for run in range(countDot):
            arr.remove('.')
        while '..' in arr:
            idx = arr.index('..')
            if idx==0:
                arr.remove('..')
            else:
                arr.pop(idx-1)
                arr.remove('..')
        
        for ele in arr:
            s+= ele+'/'
        if len(s)>1:
            s= s[:len(s)-1]
        return s

        
