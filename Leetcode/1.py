# nums = [2,7,11,15], target = 9
class Solution:
    def twoSum(self, nums, target):
        output_list=list()
        brk=False
        for first in range(len(nums)):
            for second in range(first,len(nums)):
                if second==first:
                    continue
                elif nums[first]+nums[second]==target:
                    output_list.append(first)
                    output_list.append(second)
                    brk=True
                    break
            if brk:
                break
        return output_list