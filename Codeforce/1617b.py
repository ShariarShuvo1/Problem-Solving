for run in range(int(input())):
    n=int(input())
    
    if n%2==0:
        print(2,n-3,1)
    else:
        x=(n-1)//2
        if x%2==0:
            print(x-1,x+1,1)
        else:
            print(x-2,x+2,1)