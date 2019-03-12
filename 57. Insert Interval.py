# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    def insert(self, intervals: List[Interval], newInterval: Interval) -> List[Interval]:
        if len(intervals)<2:
            if len(intervals)<1: return [newInterval]
            return [Interval(min(intervals[0].start,newInterval.start),\
                            max(intervals[0].end,newInterval.end))]
        bottom=0
        while True:
            if intervals[bottom].end>=newInterval.start: break
            bottom+=1
            if bottom>=len(intervals):
                intervals.append(newInterval)
                return intervals
        top=len(intervals)-1
        while True:
            if intervals[top].start<=newInterval.end: break
            top-=1
            if top<0:
                intervals.insert(0,newInterval)
                return intervals
        result=[]
        for i in range(bottom):
            result.append(intervals[i])
        result.append(Interval(min(intervals[bottom].start,newInterval.start),\
                               max(intervals[top].end,newInterval.end)))
        for i in range(top+1,len(intervals)):
            result.append(intervals[i])
        return result