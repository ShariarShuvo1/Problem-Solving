class Solution:
    def removeDuplicates(self, nums):
        new_list=nums.copy()
        new_list_2=list()
        for ele in new_list:
            if ele not in new_list_2:
                new_list_2.append(ele)
        for i in range(len(new_list_2)):
            nums[i]=new_list_2[i]
        k=len(new_list_2)
        return k