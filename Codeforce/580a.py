n=int(input())
lst=list(map(int,input().split()))
final=list()
h=1
if n==1:
    print(1)
else:
    for i in range(1,n):
        if lst[i]>=lst[i-1]:
            h+=1
            if i==n-1:
                final.append(h)
        else:
            final.append(h)
            h=1
    print(max(final))