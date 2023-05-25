s=input().split('WUB')
st=list()
for ele in s:
    if ele !='':
        st.append(ele)
s=''
for ele in st:
    s+=f'{ele} '
s=s[:len(s)-1]
print(s)