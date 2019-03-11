class Solution:
    def validPalindrome(self, s: str) -> bool:
        if len(s)<3:
            return True
        start=0
        end=len(s)-1
        while end>start:
            if s[start]!=s[end]:
                can1=True
                start1=start
                end1=end-1
                while end1>start1:
                    if s[start1]!=s[end1]:
                        can1=False
                        break
                    end1-=1
                    start1+=1
                
                can2=True
                start2=start+1
                end2=end
                while end2>start2:
                    if s[start2]!=s[end2]:
                        can2=False
                        break
                    end2-=1
                    start2+=1
                if can1 or can2: return True
                return False
            
            end-=1
            start+=1
        
        return True

my=Solution()
print(my.validPalindrome('yd'))