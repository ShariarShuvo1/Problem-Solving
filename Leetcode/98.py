import sys
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, head: Optional[TreeNode]) -> bool:
        num = sys.maxsize
        def validBST(root,low,high):
            if root==None:
                return True
            if root.val>low and root.val<high:
                return validBST(root.left,low,root.val) and validBST(root.right,root.val,high)
            else:
                return False
        return validBST(head,-num,+num)
