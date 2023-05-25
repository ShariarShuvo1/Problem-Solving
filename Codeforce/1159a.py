n=int(input())
st=input()

if '+' not in st:
    print(0)
elif '-' not in st:
    print(n)
else:
    num=0
    temp=0
    for i in range(n-1,-1,-1):
        if st[i]=='+':
            num+=1
        else:
            num-=1
        temp=max(temp,num)
    print(temp)