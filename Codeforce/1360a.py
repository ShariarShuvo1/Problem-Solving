for run in range(int(input())):
    x,y=map(int,input().split())
    m=min(x,y)
    if m*2>max(x,y):
        print((m*2)**2)
    else:
        print((max(x,y))**2)