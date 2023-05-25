for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    count=0
    for ele in lst:
        if ele%2==1:
            count+=1
    if count==n:
        print("YES")
    else:
        print('NO')