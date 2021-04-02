#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& A) {
    //边界条件判断
    if ( A.size() == 0)
        return 0;
    int left = 0;
    for (int right = 1; right < A.size(); right++)
        //如果左指针和右指针指向的值一样，说明有重复的，
        //这个时候，左指针不动，右指针继续往右移。如果他俩
        //指向的值不一样就把右指针指向的值往前挪
        if (A[left] != A[right])
            A[++left] = A[right];
    return ++left;

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
