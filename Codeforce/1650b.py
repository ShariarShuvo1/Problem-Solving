for run in range(int(input())):
    l,h,a=map(int,input().split())
    x=(h//a)+(h%a)
    p=h-h%a
    p-=1
    if l<=p:
        x=max(x,(p//a)+(p%a))
    print(x)