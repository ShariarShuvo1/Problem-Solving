for run in range(int(input())):
    a,k=map(int,input().split())
    if a<k:
        print(k-a)
    elif a%2== k%2:
        print(0)
    else:
        print(1)
#Took Hint