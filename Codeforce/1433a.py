boaring=[1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999]
for run in range(int(input())):
    n=int(input())
    idx=0
    for i in range(len(boaring)):
        if boaring[i]==n:
            idx=i
            break
    sum=0
    for i in range(idx+1):
        sum+=len(str(boaring[i]))
    print(sum)