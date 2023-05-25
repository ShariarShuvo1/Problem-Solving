for run in range(int(input())):
    n=int(input())
    if n%2==0 and n>2:
        a=n//2
        print(a-1)
    elif n%2==1 and n>1:
        print(int(n/2))
    else:
        print(0)