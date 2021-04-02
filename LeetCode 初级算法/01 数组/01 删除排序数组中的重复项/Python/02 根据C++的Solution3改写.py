def removeDeplicates(nums: list):
    if len(nums) == 0: return 0

    length = 1
    pointer = 1

    for i in range(len(nums)):
        if nums[i] == nums[pointer - 1]:
            continue
        nums[pointer] = nums[i]
        pointer += 1
        length += 1
    return length

nums1 = [1,1,1,2]
length = removeDeplicates(nums1)
print([nums1[i] for i in range(length)])