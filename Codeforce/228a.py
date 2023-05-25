lst=list(map(int,input().split()))
new_list=list()
for ele in lst:
    if ele not in new_list:
        new_list.append(ele)
print(4-len(new_list))