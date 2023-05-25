for run in range(int(input())):
    candy,kids=map(int,input().split())
    get=candy-candy%kids
    get+=min(candy%kids,kids/2)
    print(int(get))