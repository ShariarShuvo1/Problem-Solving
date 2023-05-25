for run in range(int(input())):
    n=int(input())
    s='989'
    if n<=3:
        print(s[:n])
    else:
        st=s
        x='0123456789'
        m=n-3
        m=m//10
        st+=x*m
        p=3+(m*10)
        p=n-p
        st+=x[:p]
        print(st)