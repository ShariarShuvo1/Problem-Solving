n=int(input())
lst=list()
for _ in range(n):
    lst.append(input())
x=0
for i in range(1,n-1):
    for j in range(1,n-1):
        if lst[i][j]=='X':
            if lst[i-1][j-1]==lst[i-1][j+1]==lst[i+1][j-1]==lst[i+1][j+1]=='X':
                x+=1
print(x)