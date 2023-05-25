a,b=map(int,input().split())
lst=list(map(int,input().split()))
lst.sort()
new=[0]
for ele in lst:
    new.append(new[-1]+ele)
for x in range(b):
    m,n=map(int,input().split())
    print(new[a-m+n] - new[a-m])