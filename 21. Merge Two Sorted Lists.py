# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        result=ListNode(0)
        head=result
        while l1!=None and l2!=None:
            if l1.val>l2.val:
                head.next=ListNode(l2.val)
                l2=l2.next
            else:
                head.next=ListNode(l1.val)
                l1=l1.next
            head=head.next
        
        while l1!=None:
            head.next=ListNode(l1.val)
            l1=l1.next
            head=head.next
            
        while l2!=None:
            head.next=ListNode(l2.val)
            l2=l2.next
            head=head.next
        
        return result.next