nums = [3,2,2,3]
val = 3

expectedNums = []

for i in range(0, len(nums)):
    if nums[i] != val:
        expectedNums.append(nums[i])

print(expectedNums)
print(len(expectedNums))

    

