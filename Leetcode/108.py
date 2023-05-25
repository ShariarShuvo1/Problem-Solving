# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        lenth = len(nums)
        if lenth==0:
            return
        
        m = lenth//2
        tree = TreeNode(nums[m]) 
        tree.left = self.sortedArrayToBST(nums[:m])
        tree.right = self.sortedArrayToBST(nums[m+1:])
        return tree


        