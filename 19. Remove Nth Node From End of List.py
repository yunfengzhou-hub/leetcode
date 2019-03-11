# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        
        
        back1=head
        back=ListNode(0)
        back.next=head
        head=back
        for i in range(n+1):
            head=head.next
            if head.next
        while head!=None:
            head=head.next
            back=back.next
        back.next=back.next.next
        return back1