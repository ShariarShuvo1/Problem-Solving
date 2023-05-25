for run in range(int(input())):
    n,k=map(int,input().split())
    if n%2==0:
        print(n+2*k)
        continue
    p=0
    for i in range(n,1,-1):
        if n%i==0:
            p=i
    print(n+p+2*(k-1))
#Copied for OCD