n=int(input())
for run in range(n):
    f=int(input())
    if f<=6:
        print(15)
    else:
        if f%2==0:
            val=int(5*(f//2))
        else:
            val = int(5*((f+1)//2))
        print(val)