# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
#        start=head
#        end=head
#        head=head.next
#        
#        while True:
#            if end==None: break
#            end=end.next
#            if end==None: break
#            end=end.next    
#            start.next.next=start
#            start.next=end
#            print(end.val)
#            
#        return head
        
        result=ListNode(0)
        top1=head
        top2=result
        while True:
            start=top1
            if start==None: break
            end=top1.next
            if end==None: break
            top1=end.next.next
            top2.next=end
            top2=top2.next
            top2.next=start
            top2=top2.next
        
        return result.next