for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    cpy=lst.copy()
    cpy.sort()
    if lst==cpy:
        print(0)
    elif lst[0]==1 or lst[-1]==n:
        print(1)
    elif lst[0] == n and lst[-1] ==1:
        print(3)
    else:
        print(2)