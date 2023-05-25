# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1=''
        num2=''
        while l1.next!=None:
            num1+=str(l1.val)
            l1=l1.next
        num1+=str(l1.val)
        while l2.next!=None:
            num2+=str(l2.val)
            l2=l2.next
        num2+=str(l2.val)
        num1=num1[::-1]
        num2 = num2[::-1]
        num = int(num1)+int(num2)
        num=str(num)
        last = None
        for c in range(len(num)):
            last = ListNode(int(num[c]),last)
        return last
