def removeDeplicates(nums: list):
    if len(nums) > 1:
        for _ in range(1, len(nums)+1):
            if len(nums) > 1 and nums[1] == nums[0] :
                nums.pop(0)
            else:
                nums.append(nums.pop(0))

    return len(nums)

nums1 = [1,1,1]
len = removeDeplicates(nums1)
print(nums1)

