n,k=map(int,input().split())
i=0
while i<k:
    if n==0:
        n=1
        break
    elif (str(n))[-1]=='0':
        n=n//10
        i+=1
    else:
        n-=1
        i+=1
print(n)