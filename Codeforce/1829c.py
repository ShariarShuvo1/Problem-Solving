for run in range(int(input())):
    n=int(input())
    zeroOne=0
    oneZero=0
    doubleOne=0
    foundDoubleOne=False
    foundOneZero=False
    foundZeroOne = False
    for i in range(n):
        time,skill = map(str,input().split())
        if skill=='11' and doubleOne>int(time):
            doubleOne = int(time)
        elif doubleOne==0 and skill=='11':
            doubleOne=int(time)
            foundDoubleOne=True
        if skill=='10' and oneZero>int(time):
            oneZero = int(time)
        elif skill=='10' and oneZero==0:
            oneZero=int(time)
            foundOneZero=True
        if skill=='01' and zeroOne>int(time):
            zeroOne = int(time)
        elif skill=='01' and zeroOne==0:
            zeroOne =int(time)
            foundZeroOne=True
        # print('Output = ',zeroOne,oneZero,doubleOne)
    if (doubleOne==0 and zeroOne==0) or (doubleOne==0 and oneZero==0):
        print(-1)
    elif doubleOne<(zeroOne+oneZero) and foundDoubleOne and foundZeroOne and foundOneZero:
        print(doubleOne)
    elif (foundDoubleOne and not foundOneZero and not foundZeroOne) or (foundDoubleOne and foundOneZero and not foundZeroOne) or (foundDoubleOne and not foundOneZero and foundZeroOne):
        print(doubleOne)
    else:
        print(zeroOne+oneZero)
    