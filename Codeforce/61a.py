st1=input()
st2=input()
st=''
for i in range(len(st1)):
    if st1[i] != st2[i]:
        st+="1"
    else:
        st+='0'
print(st)