# Definition for an interval.
class Interval:
     def __init__(self, s=0, e=0):
         self.start = s
         self.end = e

class Solution:
    def merge(self, intervals):
        if len(intervals)<2:
            return intervals
        result=[]
        for i in range(len(intervals)):
            result.append([intervals[i].start,intervals[i].end])
        result.sort()
        print(result)
        i=0
        while True:
            if result[i][1]>=result[i+1][0]:
                result[i][1]=max(result[i+1][1],result[i][1])
                result.remove(result[i+1])
            else:
                i+=1
            if i>=len(result)-1: break
        intervals=[]
        for i in range(len(result)):
            intervals.append(Interval(result[i][0],result[i][1]))
        return intervals

mysolution=Solution()
a=mysolution.merge([Interval(1,4),Interval(2,3)])