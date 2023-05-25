for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    idx=0
    if lst[0] != lst[1] and lst[1]==lst[2]:
        print(1)
    else:
        for i in range(1,n):
            if lst[i] != lst[i-1]:
                idx=i
                break
        print(i+1)