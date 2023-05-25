for run in range(int(input( ))):
    n=int(input())
    total=0
    i=1
    while i<=n:
        j=1
        while j<=9:
            if i*j<=n:
                total+=1
            j+=1
        i=(i*10)+1
    print(total)
