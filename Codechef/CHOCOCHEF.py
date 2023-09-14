for run in range(int(input())):
    n = int(input())
    if(n%3==0):
        a = (n//3)-1
        b = a
        c = n - (a+b)
    else:
        a = n//3
        b = a
        c = n - (a+b)
        if n%2 ==0:
            if a%2 == 0:
                a-=1
                b-=1
                c+=2
    print(a, b, c)
