# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if head==None: return True
        x=[]
        while head!=None:
            x.append(head.val)
            head=head.next
        for i in range(len(x)):
            if x[i]!=x[-i-1]: return False
        return True