# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    @staticmethod
    def identical(p,q):
        if p==None and q==None:
            return True
        elif (p==None and q!=None) or (p!=None and q==None):
            return False
        elif p.val == q.val:
            return True and Solution.identical(p.left,q.left) and Solution.identical(p.right,q.right)
        elif p.val!=q.val:
            return False
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        return Solution.identical(p,q)
    
