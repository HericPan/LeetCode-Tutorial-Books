#include <iostream>
#include <vector>
using namespace std;

/*
因为数组是排序的，只要是相同的肯定是挨着的，我们只需要遍历所有数组，然后前后两两比较，如果有相同的就把后面的给删除。

1，双指针解决
使用两个指针，右指针始终往右移动，

如果右指针指向的值等于左指针指向的值，那么右指针继续往右移动，左指针不动。
如果右指针指向的值不等于左指针指向的值，那么就把右指针指向的值往左移，同时左指针要往左移一步。

作者：数据结构和算法
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2gy9m/?discussion=4Zkrel
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */

int removeDuplicates(vector<int>& nums) {
    unsigned int j = nums.size();
    if (j > 1)
    {
        for (unsigned int i = 1; i <= j; i++)
        {
            if (nums.size() > 1 && nums[1] == nums[0]){
                nums.erase(nums.begin());
            } else {
                nums.push_back(nums[0]);
                nums.erase(nums.begin());

            }
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    // nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
    int len = removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
    for (int i = 0; i < len; i++) {
        cout << nums[i];
    }

}
