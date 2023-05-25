n=int(input())
free=0
for run in range(n):
    live,total=map(int,input().split())
    if total-live>=2:
        free+=1
print(free)