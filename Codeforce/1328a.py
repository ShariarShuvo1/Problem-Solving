n=int(input())
for run in range(n):
    a,b=map(int,input().split())
    div=a/b
    if (div)>int(div):
        div+=1
    div=b*int(div)
    print(int(div)-a)