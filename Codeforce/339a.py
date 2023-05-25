st=list(map(int,input().split('+')))
st.sort()
final=''
for ele in st:
    final+=f'{str(ele)}+'
final=final[:len(final)-1]
print(final)