for run in range(int(input())):
    n, x, y = map(int, input().split())
    count = 0
    smallORN = y//3
    if (x < smallORN):
        count = x
        x = 0
    else:
        count = smallORN
        x -= smallORN
    count += (x//2)
    if (count >= n):
        print('YES')
    else:
        print("NO")
