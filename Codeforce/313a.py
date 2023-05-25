n=int(input())
if n>=0:
    print(n)
else:
    n=str(n)
    if int(n[-2])>int(n[-1]):
        print(int(f'{n[0:len(n)-2]}{n[-1]}'))
    else:
        print(int(f'{n[0:len(n)-1]}'))