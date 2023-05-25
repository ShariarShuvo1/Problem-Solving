# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def largestValues(self, root):
        arr=list()
        def maxVAl(head,idx):
            if head!=None:
                if len(arr)==idx:
                    arr.append(head.val)
                else:
                    arr[idx] = max(arr[idx],head.val)
                maxVAl(head.left,idx+1)
                maxVAl(head.right,idx+1)
        maxVAl(root,0)
        return arr