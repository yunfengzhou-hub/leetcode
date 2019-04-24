import math

class Solution:
    def coinChange(self, coins, amount) -> int:
        coins.sort()
        i=0
        while i<len(coins)-1:
            if coins[i]==coins[i+1]:
                del(coins[i])
            else:
                i+=1
        if amount==0: return 0
        if len(coins)<1: return -1
        if amount<coins[0]: return -1
            
        result=[float("inf") for _ in range(amount+1)]
        top=0
        for i in range(coins[0],min(amount,coins[-1])+1):
            #print([i,top])
            if i==coins[top]:
                result[i]=1
                top+=1
            else:
                for j in range(top):
                    result[i]=min(result[i],result[i-coins[j]]+1)
        for i in range(i,amount+1):
            #print(i)
            for j in range(top):
                #print([i,j])
                result[i]=min(result[i],result[i-coins[j]]+1)
        #print([result[i] for i in range(10)])
        if math.isinf(result[amount]):
            return -1
        else:
            return result[amount]

my=Solution()
print(my.coinChange([281,20,251,251],7323))