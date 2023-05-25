k=input()
move=0
if (k[0]=='a' and k[1]=='1') or (k[0]=='a' and k[1]=='8') or (k[0]=='h' and k[1]=='1') or (k[0]=='h' and k[1]=='8'):
    move=3
elif 'a'<k[0]<'h' and 1<int(k[1])<8:
    move=8
else:
    move = 5
print(move)