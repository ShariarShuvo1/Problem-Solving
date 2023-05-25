for run in range(int(input())):
    n,a,b=map(int,input().split())
    st='abcdefghijklmnopqrstuvwxyz'
    s=''
    while len(s)<n:
        s+=st[:b]
    print(s[:n])
#took hint