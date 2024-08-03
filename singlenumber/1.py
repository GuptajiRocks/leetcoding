from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        td = dict()
        for i in range(len(nums)):
            count = 0
            for j in range(len(nums)):
                if nums[i] == nums[j]:
                    count += 1
                
            td[nums[i]] = count

        for k in td:
            if td[k] == 1:
                return k

        return 0          

x = Solution()
res = x.singleNumber([4,1,2,1,2])
print(res)