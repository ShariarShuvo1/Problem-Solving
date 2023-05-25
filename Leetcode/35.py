class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        idx=0
        if target in nums:
            for ele in range(len(nums)):
                if nums[ele] == target:
                    return ele
        else:
            if len(nums)>1:
                for i in range(len(nums)-1):
                    if nums[i]<target<nums[i+1]:
                        return i+1
                    elif target<nums[i]:
                        return i
                    elif (i==len(nums)-2) and target>nums[i+1]:
                        return i+2
            elif len(nums)==0:
                return 0
            else:
                if target>nums[0]:
                    return 1
                else:
                    return 0