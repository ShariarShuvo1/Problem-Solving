# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root==None:
            pass
        elif root.left!=None and root.right!=None:
            temp = root.left
            root.left = root.right
            root.right = temp
            self.invertTree(root.left)
            self.invertTree(root.right)
        elif root.left ==None and root.right!=None:
            temp = root.left
            root.left = root.right
            root.right = temp
            self.invertTree(root.left)
        elif root.left !=None and root.right==None:
            temp = root.left
            root.left = root.right
            root.right = temp
            self.invertTree(root.right)
        return root