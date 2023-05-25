for run in range(int(input())):
    n,a,b=map(int,input().split())
    if ((n-(a+b))>1) or (a==b==n):
        print('Yes')
    else:
        print('No')