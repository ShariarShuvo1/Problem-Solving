for run in range(int(input())):
    m=int(input())
    n=input()
    for i in range(1-(m%2),m,2):
        x=1+(m%2)
        if int(n[i])%2==m%2:
            x+=1
            break
    if x==2:
        print(2)
    else:
        print(1)