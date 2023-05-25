word=input()
up,low=(0,0)
for ele in word:
    if ele>'Z':
        low+=1
    else:
        up+=1
if up>low:
    word=word.upper()
else:
    word=word.lower()
print(word)