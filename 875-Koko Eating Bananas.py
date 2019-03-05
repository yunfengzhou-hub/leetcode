class Solution:
    def minEatingSpeed(self, piles, H):
        start=1
        end=max(piles)
        while end-start>=2:
            center=int((end+start)/2)
            tempH=0
            for i in range(len(piles)):
                tempH+=piles[i]//center
                if piles[i]%center>0:
                    tempH+=1
            if tempH<=H:
                end=center
            else:
                start=center
            print(start,center)
        tempH=0
        for i in range(len(piles)):
            tempH+=piles[i]//start
            if piles[i]%start>0:
                tempH+=1
        if tempH<=H:
            return start
        else:
            return end
piles=[332484035, 524908576, 855865114, 632922376, 222257295, 690155293, 112677673, 679580077, 337406589, 290818316, 877337160, 901728858, 679284947, 688210097, 692137887, 718203285, 629455728, 941802184]

#H=823855818
H=823855818
mysolution=Solution()
print(mysolution.minEatingSpeed(piles, H))