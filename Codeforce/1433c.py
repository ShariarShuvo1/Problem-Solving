for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    doBreak=False
    if len(set(lst)) ==1:
        print(-1)
    else:
        m=max(lst)
        for i in range(n):
            if lst[i]==m:
                if i==0:
                    if lst[i]>lst[i+1]:
                        idx=i
                        break
                elif i==n-1:
                    if lst[i]>lst[i-1]:
                        idx=i
                        break
                else:
                    if lst[i-1]<lst[i] or lst[i+1]<lst[i]:
                        idx=i
                        break
        print(idx+1)