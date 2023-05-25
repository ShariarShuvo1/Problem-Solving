for run in range(int(input())):
    n=input()
    arr=list(map(int,input().split()))
    maxVal=0
    current=0
    for ele in arr:
        if ele==0:
            current+=1
            if current>maxVal:
                maxVal=current
        else:
            if current>maxVal:
                maxVal=current
            current=0
    print(maxVal)