class Solution:
    def mergeTwoLists(self, list1, list2):
        if list1!=None and list2 != None:
            final=0
            if list1.val<=list2.val:
                final=list1
                list1=list1.next
            else:
                final=list2
                list2=list2.next
            arr_final=final
            while list1 and list2:
                if list1.val<=list2.val:
                    temp=list1
                    list1=list1.next
                else:
                    temp=list2
                    list2=list2.next
                arr_final.next=temp
                arr_final=temp
            if list1:
                arr_final.next=list1
            if list2:
                arr_final.next=list2
            return final

        else:
            if list1==None:
                return list2
            else:
                return list1