test=int(input())
for run in range(test):
    lst=list()
    arr=int(input())
    a1=list(map(int,input().split()))
    a2=list(map(int,input().split()))
    a3=list(map(int,input().split()))
    for i in range(arr):
        if i==0:
            lst.append(str(a1[i]))
        else:
            if a1[i]!=int(lst[-1]):
                lst.append(str(a1[i]))
            elif a2[i]!=int(lst[-1]):
                lst.append(str(a2[i]))
            elif a3[i]!=int(lst[-1]):
                lst.append(str(a3[i]))
    print(' '.join(lst))