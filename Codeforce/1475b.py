for run in range(int(input())):
    n=int(input())
    # zero=n//2020
    # comp=zero
    # one=0
    # possible=False
    # while True:
    #     if one==comp+1:
    #         possible=False
    #         break
    #     else:
    #         if 2020*zero + 2021*one == n:
    #             possible =True
    #             break
    #         else:
    #             zero-=1
    #             one+=1
    # if possible:
    #     print('YES')
    # else:
    #     print("NO")
    ####MY code but time complexity
    one=n%2020
    one=one*2021
    zero=n-one
    if zero >= 0 and zero/2020 == zero//2020:
        print("YES")
    else:
        print('No')
    #After taking hint