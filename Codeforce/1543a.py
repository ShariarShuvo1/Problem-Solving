for run in range(int(input())):
    a,b=map(int,input().split())
    if a==b:
        print(0,0)
    else:
        excitment= abs(a-b)
        moves=min(a%excitment, excitment-(a%excitment))
        print(excitment,moves)
#Took hint