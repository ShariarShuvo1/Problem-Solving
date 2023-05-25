n,b,d=map(int,input().split())
lst=list(map(int,input().split()))
current=0
clean=0
for ele in lst:
    if ele>b:
        continue
    else:
        current+=ele
        if current>d:
            clean+=1
            current=0
print(clean)