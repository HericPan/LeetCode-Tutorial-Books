#include <iostream>
#include <vector>
using namespace std;

// 这个版本是最快的
/*
 常规操作，先去除异常场景。把数组是null和数组为空的情况排除。
 由于题目要求只能在原数组上删除，且该数组是个排好序的数组。
 那么我们可以定义一个游标 index，来记录需要替换为后面数据的位置。
 由于第一个元素肯定是要保留在数组中的，
 因此起始，我们将游标指向数组的第二个元素（此位置为可能替换元素的位置），
 数组下标指向第二个元素。判断游标指向位置的前一个元素的值和当前获取的数组下标值是否相同。
 若相同，则游标位置不变，数组下标后移。
 若不同，代表需要把新元素替换到游标指向的位置。则替换元素，并且游标指向下一个位置，
 计数项加一。
按此操作循环整个数组可得到最终结果。

作者：坚持
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2gy9m/?discussion=INWOZy
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }

    int count = 1;
    int index = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[index - 1]) {
            continue;
        }
        nums[index] = nums[i];
        index++;
        count++;
    }
    return count;



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
