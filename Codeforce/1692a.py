for run in range(int(input())):
    a,b,c,d=map(int,input().split())
    dis=0
    if b>a:
        dis+=1
    if c>a:
        dis+=1
    if d>a:
        dis+=1
    print(dis)