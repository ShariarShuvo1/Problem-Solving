for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    mx=max(lst)
    mn=min(lst)
    print(mx-mn)