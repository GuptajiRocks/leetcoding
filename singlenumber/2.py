class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        t1 = set(nums)
        l = list(t1)
        temp = 0
        count = 0

        for i in l:
            if i in nums:
                count += 1
                if count >= 2:
                    count = 0
                    continue
                else:
                    return i
                    
        return 0

        