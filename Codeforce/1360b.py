for run in range(int(input())):
    n=int(input())
    s=list(map(int,input().split()))
    s.sort(reverse=True)
    lst=list()
    for i in range(1,n):
        lst.append(s[i-1]-s[i])
    print(min(lst))