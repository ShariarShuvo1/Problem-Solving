for run in range(int(input())):
    n,k = map(int, input().split())
    lst = list(map(int,input().split()))
    mult = 1
    for ele in lst:
        mult*=ele
    val = 2023/mult
    if (val == 2023//mult):
        print("YES")
        print(int(val), end="")
        for i in range(k-1):
            print(" 1",end="")
        print()
    else:
        print("NO")