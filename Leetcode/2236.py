# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def checkTree(self, root):
        if root==None:
            return True
        
        if root.left != None and root.right == None:
            if root.val ==root.left.val:
                return True
            else:
                return False
        elif root.left == None and root.right != None:
            if root.val ==root.right.val:
                return True
            else:
                return False
        elif root.left==None and root.right==None:
            return True
        else:
            if root.val == root.left.val+root.right.val:
                return True and self.checkTree(root.left) and self.checkTree(root.right)
            else:
                return False