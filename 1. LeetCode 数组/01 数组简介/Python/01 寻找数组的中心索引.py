

def pivotIndex(nums: list) -> int:
    totalSum = sum(nums)        # nums中所有整数和
    leftSum = 0                 # 左侧总和，默认是0
    for i in range(len(nums)):  # 遍历，索引index是i
        if leftSum == (totalSum-nums[i]) / 2:     # 判断项目左边的和 是否等于 (除了目前这个数以外所有整数的总和)/2
            return i                              # 如果是，返回这个中心索引
        leftSum += nums[i]                        # 如果不是，左侧总和加上这个索引下的值，进入下一个循环
    return -1

print(pivotIndex([1, 7, 3, 6, 5, 6]))
print(pivotIndex([1, 2, 3]))
print(pivotIndex([2, 1, -1]))
print(pivotIndex([-1,-1,-1,-1,-1,-1]))
print(pivotIndex([1,7,3,6,5,6]))