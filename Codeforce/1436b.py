def printer(lst):
    for ele in lst:
        print(*ele,sep=' ')

for run in range(int(input())):
    n=int(input())
    lst=list()
    if n%2==0:
        i=0
        j=n-1
        while i<n:
            arr=list()
            for k in range(n):
                if k==i or k==j:
                    arr.append(1)
                else:
                    arr.append(0)
            lst.append(arr)
            i+=1
            j-=1
        printer(lst)
    else:
        i=0
        j=n-1
        x= (n//2)-1
        y= ((n+1)//2)-1
        a= ((n+1)//2)-1
        b= ((n+1)//2)
        while i<n:
            arr=list()
            for k in range(n):
                if k==i or k==j:
                    arr.append(1)
                elif (k==x and i==y) or (k==a and i==b):
                    arr.append(1)
                else:
                    arr.append(0)
            lst.append(arr)
            i+=1
            j-=1
        printer(lst)

