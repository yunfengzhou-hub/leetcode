# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        if len(lists)<2:
            if len(lists)<1: return None
            return lists[0]
        result=ListNode(0)
        head=result
        
        while True:
            sign=False
            for i in range(len(lists)):
                if lists[i]!=None: break
            minplace=i
            for i in range(len(lists)):
                if lists[i]!=None:
                    sign=True
                    if lists[i].val<lists[minplace].val:
                        minplace=i
            if not sign: break
        
            head.next=ListNode(lists[minplace].val)
            lists[minplace]=lists[minplace].next
            head=head.next
        
        return result.next
#            sign=False
#            for i in range(len(lists)):
#                if lists[i]!=None:
#                    sign=True
#                    break
#                