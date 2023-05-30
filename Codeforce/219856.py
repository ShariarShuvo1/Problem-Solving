def secondDef(frist):
    if(first=='L'):
        second = 'R'
    else:
        second = 'L'
    return second

s=input()
firstCount = 0
secondCount = 0
arr=[]
x=''
for char in s:
    if(len(x)==0):
        first = char
        second = secondDef(first)
    if(char == first):
        firstCount+=1
        x+=char
    elif(char==second):
        secondCount+=1
        x+=char
    if(firstCount==secondCount):
        arr.append(x)
        x=''
        firstCount=0
        secondCount=0
print(len(arr))
for ele in arr:
    print(ele)