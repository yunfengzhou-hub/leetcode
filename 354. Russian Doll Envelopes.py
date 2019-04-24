import numpy as np

class Solution:
    def maxEnvelopes(self, envelopes):
        #print(envelopes)
        #print(np.lexsort([envelopes[:,1], envelopes[:,0]]))
        envelopes=sorted(envelopes)
        #print(envelopes)
        result=[1 for _ in range(len(envelopes))]
        for i in range(len(envelopes)):
            for j in range(i):
                if envelopes[i][0]>envelopes[j][0] and envelopes[i][1]>envelopes[j][1]:
                    result[i]=max(result[i],result[j]+1)
        return max(result)

my=Solution()
print(my.maxEnvelopes([[5,4],[6,4],[6,7],[2,3]]))