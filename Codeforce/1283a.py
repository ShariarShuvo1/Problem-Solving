for run in range(int(input())):
    h,m=map(int,input().split())
    hour=23-h
    minute=60-m
    print((hour*60)+minute)