s=input()
num=''
i=0
while i<len(s):
    if i!=(len(s)-1):
        if s[i]=='.':
            num+='0'
            i+=1
        elif s[i]=='-' and s[i+1]=='.':
            num+='1'
            # print(num)
            i+=2
        elif s[i] == '-' and s[i+1]=='-':
            num+='2'
            i+=2
    else:
        num+='0'
        i+=1
print(num)