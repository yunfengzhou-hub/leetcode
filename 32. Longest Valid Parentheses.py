class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack=[]
        top=0
        maxlength=0
        for i in range(len(s)):
            
            if s[i]=='(':
                stack.append(s[i])
                top+=1
            else:
                for j in range(top-1,-1,-1):
                    if stack[j]=='(': break
                if ('j' in locals() or 'j' in globals()) and stack[j]=='(':
                    stack[j]='2'
                    for k in range(top-2,-1,-1):
                        if stack[k].isdigit():
                            stack[k]=str(int(stack[k+1])+int(stack[k]))
                            stack.pop()
                            top-=1
                        else:
                            break
                else:
                    stack.append(s[i])
                    top+=1
        for i in range(len(stack)):
            if stack[i].isdigit() and int(stack[i])>maxlength:
                maxlength=int(stack[i])
        return maxlength

my=Solution()
print(my.longestValidParentheses("(()"))