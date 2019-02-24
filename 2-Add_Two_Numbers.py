# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        l3=ListNode(0)
        n3=l3
        carry=0
        while l2!=None and l1!=None:
            l3.next=ListNode(carry)
            carry=0
            l3=l3.next
            l3.val=l3.val+l1.val+l2.val
            if l3.val>=10:
                l3.val=l3.val-10
                carry=1
            l1=l1.next
            l2=l2.next
        if l1==None:
            while l2!=None:
                l3.next=ListNode(carry)
                carry=0
                l3=l3.next
                l3.val=l3.val+l2.val
                if l3.val>=10:
                    l3.val=l3.val-10
                    carry=1
                l2=l2.next
        else:
            while l1!=None:
                l3.next=ListNode(carry)
                carry=0
                l3=l3.next
                l3.val=l3.val+l1.val
                if l3.val>=10:
                    l3.val=l3.val-10
                    carry=1
                l1=l1.next
        if carry==1:
            l3.next=ListNode(carry)
            carry=0
        return n3.next
        
l1=ListNode(5)
#l1.next=ListNode(4)
#l1.next.next=ListNode(3)

l2=ListNode(5)
#l2.next=ListNode(6)
#l2.next.next=ListNode(4)

mysolution=Solution()
l3=mysolution.addTwoNumbers(l1,l2)
n3=l3
while l3!=None:
    print(l3.val)
    l3=l3.next