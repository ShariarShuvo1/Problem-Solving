n=int(input())
for i in range(n):
    wd=input()
    if len(wd)>10:
        print(f'{wd[0]}{len(wd)-2}{wd[-1]}')
    else:
        print(wd)