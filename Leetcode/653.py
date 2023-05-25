# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        arr = list()
        def find(head):
            if head:
                if head.val in arr: return True
                arr.append(k-head.val)
                return find(head.left) or find(head.right)
            else:
                return False
        return find(root)