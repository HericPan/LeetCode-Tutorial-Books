# 二分查找版
# def searchInsert(nums: [int], target: int) -> int:
#     lo = 0
#     hi = len(nums) - 1
#     while lo < hi:
#         mid = (hi+lo) // 2
#         if nums[mid] == target:
#             return mid
#         elif nums[mid] > target:
#             hi = mid
#         elif nums[mid] < target:
#             lo = mid
#     return -1

# 线性递归
def searchInsert(nums, target):
    if nums[0] > target:
        return 0
    for i in range(len(nums)):
        if nums[i] == target:
            return i
        elif nums[i] < target:
            if (i+1) < len(nums) and nums[i+1] > target:
                return i+1
            continue
    return len(nums)


print(searchInsert([1,3,5,6], 5))
print(searchInsert([1,3,5,6], 2))
print(searchInsert([1,3,5,6], 7))
print(searchInsert([1,3,5,6], 0))