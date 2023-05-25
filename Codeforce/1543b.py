for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    s=sum(lst)
    print(s%n*(n-(s%n)))