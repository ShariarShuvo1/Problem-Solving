for run in range(int(input())):
    a,b=map(int,input().split())
    if a>b:
        a,b=b,a
    if a==b:
        print(0)
    else:
        if b-a>10:
            temp=str(b-a)
            if temp[-1] !='0':
                x=temp[:len(temp)-1]+'0'
                num=(int(x)//10)+1
            else:
                num=(int(temp)//10)
        else:
            num=1
        print(num)