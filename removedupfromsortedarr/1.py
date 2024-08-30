nums = [1,1,2]
lenl = len(nums)
ss = set(nums)
lens = len(ss)
nums = list(ss)

for i in range(lenl - lens):
    nums.append("_")

print(nums)

