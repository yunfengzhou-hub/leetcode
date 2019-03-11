class Solution:
    def isPalin(self,word):
        for i in range(len(word)):
            if word[i]!=word[-i-1]: 
                return False
        return True
    def palindromePairs(self, words):
        result=[]
        for i in range(len(words)):
            for j in range(i+1,len(words)):
                if self.isPalin(words[i]+words[j]):
                    result.append([i,j])
                if self.isPalin(words[j]+words[i]):
                    result.append([j,i])
        return result

my=Solution()
print(my.palindromePairs(["abcd","dcba","lls","s","sssll"]))