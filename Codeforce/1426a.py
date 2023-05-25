for run in range(int(input())):
    n,x=map(int,input().split())
    lst=[[1,2]]
    if n>2:
        i=3
        j=1
        while i<=n:
            k=(j*x)+2
            m=[]
            while i<=k:
                m.append(i)
                i+=1
            j+=1
            lst.append(m)
        print(len(lst))
        
    else:
        print(1)
