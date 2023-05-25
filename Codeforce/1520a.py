for run in range(int(input())):
    n=int(input())
    s=input()
    sus=False
    for i in range(1,n):
        idx=False
        for j in range(i-1,-1,-1):
            if s[j]!=s[i]:
                idx=j
                break
        if idx!=False and s[i] in s[:idx+1]:
            sus=True
            break
    if sus:
        print('NO')
    else:
        print('YES')