n=int(input())
num=input()
luckey=True
for ele in num:
    if ele =='4' or ele == '7':
        luckey=True
    else:
        luckey=False
        break
w1=num[:n//2]
w2=num[n//2:]
sum1=0
sum2=0
for i in w1:
    sum1+=int(i)
for i in w2:
    sum2+=int(i)
if luckey and (sum1==sum2):
    print("YES")
else:
    print('NO')