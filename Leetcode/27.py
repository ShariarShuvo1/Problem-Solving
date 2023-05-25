class Solution:
    def removeElement(self, nums,val):
        new_list=nums.copy()
        new_list_2=list()
        for ele in new_list:
            if ele !=val:
                new_list_2.append(ele)
        for i in range(len(new_list_2)):
            nums[i]=new_list_2[i]
        k=len(new_list_2)
        return k