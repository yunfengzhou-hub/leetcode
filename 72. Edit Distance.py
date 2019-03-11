class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        if len(word1)==0 or len(word2)==0:
            return max(len(word1),len(word2))
        dist=[0 for _ in range(len(word1))]
        
        for i in range(len(word2)):
            currentlength=1
            for j in range(len(word1)):
                if word1[j]==word2[i]:
                    dist[j]=currentlength
                currentlength=max(currentlength,dist[j]+1)
        print(dist)
        return len(word1)-max(dist)

my=Solution()
a="intention"
b="execution"
print(my.minDistance(a,b))