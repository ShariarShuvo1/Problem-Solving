# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root==None:
            return True
        if abs(self.height(root.left)-self.height(root.right))>1:
            return False
        if self.isBalanced(root.left) and self.isBalanced(root.right):
            return True
        else:
            return False


    def height(self,root):
        if root==None:
            return 0
        else:
            return 1+ max(self.height(root.left),self.height(root.right))