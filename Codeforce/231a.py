n=int(input())
sol=0
for i in range(n):
    a,b,c=map(int,input().split())
    if a+b+c>1:
        sol+=1
print(sol)