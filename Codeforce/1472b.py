for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    if sum(lst)%2==0:
        if lst.count(2)%2==0 :
            print('YES')
        else:
            if lst.count(1)>1 and lst.count(1)%2==0:
                print('YES')
            else:
                print('NO')
    else:
        print("NO")