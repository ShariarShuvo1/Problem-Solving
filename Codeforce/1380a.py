for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    found=False
    for i in range(1,n-1):
        if lst[i]>lst[i-1] and lst[i]>lst[i+1]:
            print('YES')
            print(i,i+1,i+2)
            found=True
            break
    if found==False:
        print('NO')