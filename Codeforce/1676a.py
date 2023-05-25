for run in range(int(input())):
    n=input()
    a,b,c,d,e,f=int(n[0]),int(n[1]),int(n[2]),int(n[3]),int(n[4]),int(n[5])
    if a+b+c == d+e+f:
        print('YES')
    else:
        print('NO')