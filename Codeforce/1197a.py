for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    lst.sort()
    print(min(lst[-2]-1,n-2))