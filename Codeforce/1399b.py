for run in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l_a=min(a)
    b=list(map(int,input().split()))
    l_b=min(b)
    s=0
    for i in range(n):
        s+=max((a[i]-l_a,b[i]-l_b))
    print(s)