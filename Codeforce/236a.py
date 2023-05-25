st=input()
new=''
for i in st:
    if i not in new:
        new+=i
if len(new)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")