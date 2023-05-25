for _ in range(int(input())):
    n = int(input())
    b = list(map(int,input().split()))
    for i in range(n//2):
        print(b[i],b[-i-1], end=' ')
    print(b[n//2] if n % 2 else '\n')