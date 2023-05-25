limik,bob=map(int,input().split())
i=0
while True:
    i+=1
    limik*=3
    bob*=2
    if limik>bob:
        break
print(i)