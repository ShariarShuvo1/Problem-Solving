n,k=map(int,input().split())
st=input()
g_idx=st.index('G')
t_idx=st.index('T')
if g_idx<t_idx:
    st=st[g_idx:t_idx+1]
else:
    st=st[t_idx:g_idx+1]
    st=st[::-1]
i=0
able=False
while i<len(st):
    if st[i]=='#':
        able=False
        break
    elif st[i]=='T':
        able=True
        break
    i+=k

if able:
    print('YES')
else:
    print('NO')

