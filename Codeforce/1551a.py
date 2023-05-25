for run in range(int(input())):
    n=int(input())
    x=n/3
    a=(x*2)/2
    b=x
    if (2*(int(a))+int(b))<n and (n-(2*(int(a))+int(b)))==2:
        a=int(a)+1
        b=int(b)
    elif (2*(int(a))+int(b))<n and (n-(2*(int(a))+int(b)))==1:
        a=int(a)
        b=int(b)+1
    else:
        a=int(a)
        b=int(b)
    print(b,a)