class Solution:
    def mypermute(self,temp):
        if False not in self.used:
            self.result.append([])
            for i in range(len(temp)):
                self.result[-1].append(temp[i])
        else:
            for i in range(len(self.nums)):
                if not self.used[i]:
                    temp.append(self.nums[i])
                    self.used[i]=True
                    self.mypermute(temp)
                    temp.remove(self.nums[i])
                    self.used[i]=False
    def permute(self, nums):
        self.result=[]
        self.used=[False for _ in range(len(nums))]
        self.nums=nums
        self.mypermute([])
        return self.result

my=Solution()
print(my.permute([1,2,3]))