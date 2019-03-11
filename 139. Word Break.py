class Solution:
    def wordBreak(self, s: str, wordDict):
        match=[False for _ in range(len(s)+1)]
        match[0]=True
        top=0
        while top<len(s):
            if match[top]:
                for i in range(len(wordDict)):
                    if top+len(wordDict[i])<=len(s) and \
                    s[top:top+len(wordDict[i])]==wordDict[i]:
                        match[top+len(wordDict[i])]=True
            top+=1
        return match[-1]

my=Solution()
my.wordBreak("leetcode",["leet","code"])