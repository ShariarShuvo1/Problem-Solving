year=int(input())+1
while True:
    st=str(year)
    if (st[0]!=st[1] and st[0]!=st[2] and st[0]!=st[3]) and (st[1]!=st[2] and st[1]!=st[3]) and (st[2]!=st[3]):
        break
    else:
        year+=1
print(year)