for run in range(int(input())):
    a1, a2, b1, b2 = list(map(int, input().split()))
    a_export = a1 - a2
    b_export = b1 - b2
    sum = a_export + b_export
    if (sum < 0):
        print("YES")
    else:
        print('NO')


