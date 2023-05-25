for _ in range(int(input())):
    ab = input().split()
    s = input()
    n = int(ab[0])
    k = int(ab[-1])
    if (k*2)+1<=n and s[n-k:][::-1]==s[:k] :
        print("YES")
    else :
        print("NO")