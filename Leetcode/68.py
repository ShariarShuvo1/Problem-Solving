class Solution:
    def fullJustify(self, words: list[str], maxWidth: int) -> list[str]:
        arr=list()
        while True:
            s=''
            count = 0
            totalchar = 0
            for st in words:
                if(len(s+st)>maxWidth):
                    break
                else:
                    s+=st+' '
                    count+=1
                    totalchar+=len(st)
            
            eachSpaces = 0
            extraSpace = 0
            spaces = maxWidth-totalchar
            
            if count>1:
                eachSpaces = spaces//(count-1)
                extraSpace = (spaces-((count-1)*eachSpaces))
            newSt=''
            if count>1:
                for i in range(count):
                    if i==0:
                        newSt+=words[i]
                    else:
                        if extraSpace>0:
                            newSt+= (' '*(1+eachSpaces))+words[i]
                            extraSpace-=1
                        else:
                            newSt+= (' '*eachSpaces)+words[i]
            elif count==1:
                newSt+= words[0] + ' '*(extraSpace+spaces)
            temp = words[:count]
            words = words[count:]
            if len(words) == 0:
                newSt = ''
                for ele in temp:
                    newSt+= (ele + ' ')
                newSt = newSt[:len(newSt)-1]
                newSt+= (' '*(spaces-(count-1)))
            arr.append(newSt)
            if(len(words) == 0):
                break
        return arr
