from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        td = dict()
        res = 0
        for i in range(len(nums)):
            count = 0
            for j in nums:
                if nums[i] == j:
                    count += 1
                
            td[nums[i]] = count
        
        

        for k in td:
            if td[k] == 1:
                return k

        return 0          

x = Solution()
res = x.singleNumber([2,2,1])
print(res)